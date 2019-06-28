#include <iostream>
#include <fstream>
#include <sstream>
   
using namespace std;

string nombre_pokemon;
string vida_pokemon;
string ataque_pokemon;
string defensa_pokemon;
string poder_pokemon;
string velocidad_pokemon;
string tipo_pokemon;

void menu();
void registro();
void volver();
void pokemonrand();
void Ostream();

void capturar ();
void pokedex ();
void combate();

void extractIntegerWords();


////////////////////////////////////////////////////////////////////////////
//Menu
void menu(){

	int op;

	cout << "1.- Capturar pokemon" << endl;
	cout << "2.- Pokedex" << endl;
	cout << "3.- Combate pokemon" << endl;
	cout << "4.- Salir" << endl;
	cout << "Introduzca la opcion deseada: ";

	cin >> op, cout << endl;
	cin.ignore();

	if (op == 1)
	{	
		system("cls");
		system("clear");
		capturar();

	}else if (op == 2)
	{
		system("cls");
		system("clear");
		pokedex();

	}else if (op == 3)
	{
		system("cls");
		system("clear");
		combate();

	}else if (op == 4)
	{
		system("cls");
		system("clear");
		exit(1);

	}else
	{
		system("cls");
		system("clear");
		std::cout << "Ingrese una opcion valida." << endl;
		menu();
	}

}

////////////////////////////////////////////////////////////////////////////
//Main

int main()
{
	menu();

	return 0;
}

//////////////////////////////////////////////////////////////////////////
//Volver menu principal

void volver()
{
	system ("cls");
	system ("clear");
	main ();
}

/////////////////////////////////////////////////////////////////////////
//ofstream

void Ostream()
{

	ofstream archivo;

	archivo.open ("pokedex.txt", ios::app | ios::out);

	if (!archivo.is_open ())
	{

		archivo.open ("pokedex.txt", ios::in);

	}

	
}

//////////////////////////////////////////////////////////////////////////
//Capturar pokemon

void capturar()
{
	ofstream archivo;

	Ostream();

	//Nombre pokemon
	cout << "Nombre: ";
	getline (cin, nombre_pokemon);
	cout << endl;

	//Vida pokemon
	cout << "Vida: ";
	getline (cin, vida_pokemon);
	cout << endl;

	//Ataque pokemon
	cout << "Ataque: ";
	getline (cin, ataque_pokemon);
	cout << endl;

	//Defensa pokemon
	cout << "Defensa: ";
	getline (cin, defensa_pokemon);
	cout << endl;

	//Poder pokemon
	cout << "Poder: ";
	getline (cin, poder_pokemon);
	cout << endl;

	//Velocidad pokemon
	cout << "Velocidad: ";
	getline (cin, velocidad_pokemon);	
	cout << endl;

	//Tipo pokemon
	cout << "Tipo: ";
	getline (cin, tipo_pokemon);
	cout << endl;

	//Guardar en registro
	archivo << "Nombre: "    << nombre_pokemon    << endl;
	archivo << "Vida: "      << vida_pokemon      << endl;
	archivo << "Ataque: "    << ataque_pokemon    << endl;
	archivo << "Defensa: "   << defensa_pokemon   << endl;
	archivo << "Poder: "     << poder_pokemon     << endl;
	archivo << "Velocidad: " << velocidad_pokemon << endl;
	archivo << "Tipo: "      << tipo_pokemon      << endl << endl;

	cout << "Haz capturado a " << nombre_pokemon << "!!" << endl;
	cout << "Presione cualquier tecla para continuar...";

	//Cerrar archivo
	archivo.close ();

	cin.get();

	volver();

}

///////////////////////////////////////////////////////////////////////
//Pokedex - Ver pokemons capturados

void pokedex ()
{
	ifstream archivo;

	string texto;

	if (!archivo.is_open ())
	{

	archivo.open ("pokedex.txt", ios::in);

	}

	//Mietras el registro tenga lineas...
	while (getline (archivo, texto))
	{

		//Imprimir linea y saltar linea
		cout << texto << endl;

		//Guardar linea en texto
		getline (archivo, texto);

		//Repetir
		cout << texto << endl;
		getline (archivo, texto);
		cout << texto << endl;

	}

	//Cerrar registro
	archivo.close ();

	main ();

}

///////////////////////////////////////////////////////////////////////////
//Combate

void combate()
{

	ifstream archivo;

	string linea;
	string linea2;
	string linea3;
	string linea4;
	string linea5;
	string linea6;

	string pokemon;
	string vida;
	string poder;
	string velocidad;

	string pokemon_enemigo;
	string vida_pokemon_enemigo;
	string poder_pokemon_enemigo;
	string velocidad_pokemon_enemigo;

	//Saber si el pokemon esta en el registro
	int matchpokemon = 0;

	cout << "Introduzca el pokemon: ";
	cin >> nombre_pokemon;
	cout << endl;

	//Renombrar el nombre para que sea igual a Nombre: XXXXXXXXX 
	//para que concuerde con el nombre en el Registro
	nombre_pokemon = "Nombre: " + nombre_pokemon;

	if (!archivo.is_open ())
	{

		archivo.open ("pokedex.txt", ios::in);

	}

	//Mientras el archivo tenga lineas ->
	while (getline (archivo, linea))
	{

		//Si Nombre: XXXX == Nombre: XXXX ->
		if (nombre_pokemon == linea)
		{

			//Obtener las siquientes lineas mientras no sea una linea en blanco
			if (linea.find (nombre_pokemon) != string::npos)
			{

				//Esto es el vida = linea 2
				getline (archivo, linea);
				vida_pokemon = linea;
				cout << vida_pokemon << endl;

				//Esto es el ataque = linea 3
				getline (archivo, linea2);
				ataque_pokemon = linea2;
				cout << ataque_pokemon << endl;

				//Esto es la defensa = linea 4
				getline (archivo, linea3);
				defensa_pokemon = linea3;
				cout << defensa_pokemon << endl;

				//Esto es la velocidad = linea 5
				getline (archivo, linea4);
				poder_pokemon = linea4;
				cout << poder_pokemon << endl;

				//Esto es la velocidad = linea 6
				getline (archivo, linea5);
				velocidad_pokemon = linea5;
				cout << velocidad_pokemon << endl;

				//Esto es la velocidad = linea 7
				getline (archivo, linea6);
				tipo_pokemon = linea6;
				cout << tipo_pokemon << endl;

				cout << endl;

				//El pokemon esta en el registro
				matchpokemon = 1;

			}


		}

	
	}

	//Cerrar registro
	archivo.close ();

	//El pokemon no esta en el registro
	if (matchpokemon == 0)
	{
		cout << "pokemon no registrado." << endl;
		cout << "Presione cualquier tecla para continuar...";
		
		cin.get();
		cin.get();

		volver();
	}
/////////////////////////////////////////////////////////////////////////////
//POKEMON ENEMIGO


	cout << "Introduzca el pokemon contra el que quiere combater: ", 
	cin >> pokemon_enemigo, 
	cout << endl;

	pokemon_enemigo = "Nombre: "+pokemon_enemigo;

	if (!archivo.is_open ())
	{

		archivo.open ("capturar.txt", ios::in);

	}

	while (getline (archivo, linea))
	{

		if (pokemon_enemigo == linea)
		{

			if (linea.find (pokemon_enemigo) != string::npos)
			{

			//Esto es el vida = linea 2
			getline (archivo, linea);
			vida_pokemon_enemigo = linea;
			cout << vida_pokemon_enemigo << endl;

			//Esto es el poder = linea 3
			getline (archivo, linea2);
			poder_pokemon_enemigo = linea2;
			cout << poder_pokemon_enemigo << endl;

			//Esto es la velocidad = linea 4
			getline (archivo, linea3);
			velocidad_pokemon_enemigo = linea3;
			cout << velocidad_pokemon_enemigo << endl;


			matchpokemon = 1;

			}

		}

	}

//////////////////////////////////////////////////////////////////
//STRING TO INT pokemon aliado

	string str(poder);

	string temp;
	int number=0;

	for (unsigned int i=0; i < str.size(); i++)
	{
	    //iterate the string to find the first "number" character
	    //if found create another loop to extract it
	    //and then break the current one
	    //thus extracting the FIRST encountered numeric block
	    if (isdigit(str[i]))
	    {
	        for (unsigned int a = i; a < str.size(); a++)
	        {
	            temp += str[a];               
	        }
	      //the first numeric block is extracted
	      break;
	    }    
	}

	std::istringstream stream(temp);

	stream >> number;

	std::cout << number << std::endl; 

	int poder_int = 0;

	poder_int = number;

	cout<<"number / poder ALIADO " << poder_int + 1 << endl;

//////////////////////////////////////////////////////////////////
//STRING TO INT pokemon enemigo

	string srt1(poder_pokemon_enemigo);
	string temp12;
	int number1=0;

	for (unsigned int i=0; i < srt1.size(); i++)
	{
	    //iterate the srt1ing to find the first "number1" character
	    //if found create another loop to extract it
	    //and then break the current one
	    //thus extracting the FIRST encountered numeric block
	    if (isdigit(srt1[i]))
	    {
	        for (unsigned int a = i; a < srt1.size(); a++)
	        {
	            temp12 += srt1[a];               
	        }
	      //the first numeric block is extracted
	      break;
	    }    
	}

	std::istringstream srt1eam(temp12);

	stream >> number1;

	std::cout << number1 << std::endl; 

	int poder_enemigo_int = 0;

	poder_enemigo_int = number1;

	cout<<"number1 / poder ENEMIGO " << poder_enemigo_int + 1 << endl;



 	 if (poder_int > poder_enemigo_int)
 	 {
 	 	std::cout << "Ganaste!!!" << endl;

 	 }else if (poder_enemigo_int > poder_int)
 	 {
 	 	std::cout << "Perdiste..."   << endl;
 	 }


	///////////////////////////////////////////////////////////
	//El pokemon no esta en el registro
	if (matchpokemon == 0)
	{
		cout << "pokemon no registrado." << endl;
		cout << "Presione cualquier tecla para continuar...";
		
		cin.get();
		cin.get();

		volver();
	}

}

////////////////////////////////////////////////////////////////////////
//Extraer los numeros de un string
void extractIntegerWords(string str) 
{ 
    stringstream ss;     
  
    /* Storing the whole string into string stream */
    ss << str; 
  
    /* Running loop till the end of the stream */
    string temp; 
    int found; 
    while (!ss.eof()) { 
  
        /* extracting word by word from stream */
        ss >> temp; 
  
        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found) 
            cout << found << " "; 
  
        /* To save from space at the end of string */
        temp = ""; 
    } 
} 
