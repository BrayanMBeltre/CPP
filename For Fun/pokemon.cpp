#include <iostream>
#include <stdlib.h>
#include <fstream>

#include <string>
#include <sstream>

#include <cstdlib>

#include <typeinfo>

#include <cctype>
   
using namespace std;

void capturar ();
void pokedex ();
void pelear();
void mi_pokemon();
void page ();


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

int main()
{

  int op;

  cout << "1.- Nuevo capturar" << endl;
  cout << "2.- Pokedex" << endl;
  cout << "3.- Pelear" << endl;
  cout << "Introduzca la opcion deseada: ";

  cin >> op;
  cin.ignore ();
  cout << endl;


  if (op == 1){

      capturar ();

    }
  else if (op == 2){

      pokedex ();

    }
   if (op == 3){

      mi_pokemon ();

    }

  return 0;
}



void capturar()
{

  ofstream archivo;

  string pokemon, vida, poder, velocidad;

  archivo.open ("capturar.txt", ios::app | ios::out);

  if (archivo.fail ())
    {
      cout << "No se ha abierto el archivo.";
      exit (1);
    }
   
   //leer input
    cout << "Nombre: ";
    getline (cin, pokemon);

    cout << "vida: ";
    getline (cin, vida);

    cout << "poder: ";
    getline (cin, poder);

    cout << "velocidad: ";
    getline (cin, velocidad);

  //Guardar en archivo
  archivo << "Nombre: " << pokemon << endl;
  archivo << "vida: " << vida << endl;
  archivo << "poder: " << poder << endl;
  archivo << "velocidad: " << velocidad << endl << endl;

  archivo.close ();

   cout<<"Haz capturado a " << pokemon << "!!" << endl << endl;

   cin.get();

   system ("cls");
   system ("clear");

   main ();

}


void pokedex ()
{

  ifstream archivo;
  string texto;

  if (!archivo.is_open ())
  {

      archivo.open ("capturar.txt", ios::in);

  }

  while (getline (archivo, texto))
  {

      cout << texto << endl;
      getline (archivo, texto);
      cout << texto << endl;
      getline (archivo, texto);
      cout << texto << endl;

   }

  archivo.close ();

  main ();

  exit (1);

}


void mi_pokemon()
{

  ifstream archivo;

  string texto;
  string linea;
  string linea2;
  string linea3;

  string pokemon;
  string vida;
  string poder;
  string velocidad;

  string pokemon_enemigo;
  string vida_pokemon_enemigo;
  string poder_pokemon_enemigo;
  string velocidad_pokemon_enemigo;


  int matchpokemon = 0;

  cout << "Introduzca el pokemon: ", cin >> pokemon, cout << endl;

  pokemon = "Nombre: "+pokemon;

  if (!archivo.is_open ())
  {

    archivo.open ("capturar.txt", ios::in);

  }
    
  while (getline (archivo, linea))
  {

   // cout << "Linea 1 = " << linea <<endl ;

      if (pokemon == linea)
      {

         if (linea.find (pokemon) != string::npos)
         {

            //Esto es el vida = linea 2
            getline (archivo, linea);
            vida = linea;
            cout << vida << endl;

            //Esto es el poder = linea 3
            getline (archivo, linea2);
            poder = linea2;
            cout << poder << endl;

            //Esto es la velocidad = linea 4
            getline (archivo, linea3);
            velocidad = linea3;
            cout << velocidad << endl;

            std::cout    << endl;
             matchpokemon = 1;

         }

      }

  }

  if (matchpokemon == 0)
  {
      int op;

      cout << "pokemon no registrado." << endl;
      cout <<"¿Quieres capturarlo?"<<endl;
      cout<<"1.- Si"<<endl;
      cout<<"2.- Salir"<<endl;
      cout<<"Introduzca la opcion deseada: ";
      cin >> op;
      cout << endl;

      if (op == 1)
      {
         //Ir al menu principal
         cin.ignore();
         capturar ();

      }else if (op == 2)
      {

         exit (1);

      }

   }


  archivo.close ();

////////////////////////////////////////////////////////////////



  cout << "Introduzca el pokemon contra el que quiere pelear: ", cin >> pokemon_enemigo, cout << endl;

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
    			
    			
    			
    			
    			
    			
    			
    			
    		   	string srt1(poder_pokemon_enemigo);
			    srting temp12;
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
			    
			    std::isrt1ingsrt1eam srt1eam(temp1);
			    
			    srt1eam >> number1;
			    
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



  if (matchpokemon == 0)
  {
      int op;

      cout << "pokemon no registrado." << endl;
      cout <<"¿Quieres capturarlo?"<<endl;
      cout<<"1.- Si"<<endl;
      cout<<"2.- Salir"<<endl;
      cout<<"Introduzca la opcion deseada: ";
      cin >> op;
      cout << endl;

      if (op == 1)
      {
         //Ir al menu principal
         cin.ignore();
         capturar ();

      }else if (op == 2)
      {

         exit (1);

      }

   }


  archivo.close ();

  exit (1);

}



void page()
{
   cout << "Haz entrado a la pagina!!";
}
