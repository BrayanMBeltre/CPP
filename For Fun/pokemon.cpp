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

string nombre_pokemon_enemigo;
string vida_pokemon_enemigo;
string ataque_pokemon_enemigo;
string defensa_pokemon_enemigo;
string poder_pokemon_enemigo;
string velocidad_pokemon_enemigo;
string tipo_pokemon_enemigo;

void menu();
void registro();
void volver();
void pokemonrand();
void Ostream();

void capturar ();
void pokedex ();
void combate();
void p_aliado();
void p_enemigo();
int srt_to_int();



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

//////////////////////////////////////////////////////////////////////////
//Capturar pokemon

void capturar()
{
    ofstream archivo;

    archivo.open ("pokedex.txt", ios::app | ios::out);

    if (!archivo.is_open ())
    {

        archivo.open ("pokedex.txt", ios::in);

    }

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

        //Imprimir linea[0] y saltar linea[0]
        cout << texto << endl;

        //Guardar linea[0] en texto
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
///////////////////////////////////////////////////////////////////////
//Pokemon aliado

void p_aliado()
{
    ifstream archivo;

    string linea[7];

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
    while (getline (archivo, linea[0]))
    {

        //Si Nombre: XXXX == Nombre: XXXX ->
        if (nombre_pokemon == linea[0])
        {

            //Obtener las siquientes lineas mientras no sea una linea[0] en blanco
            if (linea[0].find (nombre_pokemon) != string::npos)
            {

                //Esto es el vida = linea 2
                getline (archivo, linea[0]);
                vida_pokemon = linea[0];
                cout << vida_pokemon << endl;

                //Esto es el ataque = linea 3
                getline (archivo, linea[1]);
                ataque_pokemon = linea[1];
                cout << ataque_pokemon << endl;

                //Esto es la defensa = linea 4
                getline (archivo, linea[2]);
                defensa_pokemon = linea[2];
                cout << defensa_pokemon << endl;

                //Esto es la velocidad = linea 5
                getline (archivo, linea[3]);
                poder_pokemon = linea[3];
                cout << poder_pokemon << endl;

                //Esto es la velocidad = linea 6
                getline (archivo, linea[5]);
                velocidad_pokemon = linea[5];
                cout << velocidad_pokemon << endl;

                //Esto es la velocidad = linea 7
                getline (archivo, linea[6]);
                tipo_pokemon = linea[6];
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

}

/////////////////////////////////////////////////////////////////////
//Pokemon enemigo

void p_enemigo()
{
    ifstream archivo;

    string linea[7];

    //Saber si el pokemon esta en el registro
    int matchpokemon = 0;

    cout << "Introduzca el pokemon contra el que quiere combater: ", 
    cin >> nombre_pokemon_enemigo, 
    cout << endl;

    //Renombrar el nombre para que sea igual a Nombre: XXXXXXXXX 
    //para que concuerde con el nombre en el Registro
    nombre_pokemon_enemigo = "Nombre: "+nombre_pokemon_enemigo;


    if (!archivo.is_open ())
    {

        archivo.open ("pokedex.txt", ios::in);

    }

    while (getline (archivo, linea[0]))
    {

        if (nombre_pokemon_enemigo == linea[0])
        {

            if (linea[0].find (nombre_pokemon_enemigo) != string::npos)
            {

            //Esto es el vida = linea 2
            getline (archivo, linea[0]);
            vida_pokemon_enemigo = linea[0];
            cout << vida_pokemon_enemigo << endl;

            //Esto es el ataque = linea 3
            getline (archivo, linea[1]);
            ataque_pokemon_enemigo = linea[1];
            cout << ataque_pokemon_enemigo << endl;

            //Esto es la defensa = linea 4
            getline (archivo, linea[2]);
            defensa_pokemon_enemigo = linea[2];
            cout << defensa_pokemon_enemigo << endl;

            //Esto es la velocidad = linea 5
            getline (archivo, linea[3]);
            poder_pokemon_enemigo = linea[3];
            cout << poder_pokemon_enemigo << endl;

            //Esto es la velocidad = linea 6
            getline (archivo, linea[5]);
            velocidad_pokemon_enemigo = linea[5];
            cout << velocidad_pokemon_enemigo << endl;

            //Esto es la velocidad = linea 7
            getline (archivo, linea[6]);
            tipo_pokemon_enemigo = linea[6];
            cout << tipo_pokemon_enemigo << endl;

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

}

/////////////////////////////////////////////////////////////////////////
//TOMAR EL VALOR NUMERO DEL TEXTO

int srt_to_int(string texto)
{

    //Declarar string srt y se le otorga el valor de texto
    string str(texto);

    //variable temporal
    string temp;

    //variable entera donde se guardaran los numeros
    int numero = 0;

    //recorrer el texto
    for (unsigned int i = 0; i < str.size(); i++)
    {
        /* iterar la cadena para encontrar el primer carácter "número"
           si se encuentra crear otro bucle para extraerlo
           y luego rompe el actual
           extrayendo así el PRIMER bloque numérico encontrado */
        if (isdigit(str[i]))
        {
            for (unsigned int a = i; a < str.size(); a++)
            {
                temp += str[a];               
            }
          //Se extrae el primer bloque numérico
          break;
        }    
    }
    //input stream class to operate on strings.
    //http://www.cplusplus.com/reference/sstream/istringstream/
    istringstream stream(temp);

    //paso el valor de stream a numero
    stream >> numero;

    //Retornar el valor numerico
    return numero;

}

///////////////////////////////////////////////////////////////////////////
//Combate

void combate()
{
    p_aliado();

    p_enemigo();

    poder_pokemon = srt_to_int(poder_pokemon);
    poder_pokemon_enemigo = srt_to_int(poder_pokemon_enemigo);

     if (poder_pokemon > poder_pokemon_enemigo)
     {
        std::cout << "Ganaste!!!" << endl;

     }else if (poder_pokemon_enemigo > poder_pokemon)
     {
        std::cout << "Perdiste..."   << endl;
     }



}
