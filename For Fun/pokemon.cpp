#include <iostream>
#include <fstream>
#include <sstream>
   
using namespace std;


struct pokemon {
    
    string nombre;
    string vida;
    string ataque;
    string defensa;
    string poder;
    string velocidad;
    string tipo;

}pokemon, aliado, enemigo;

struct pokemon_int {
    
    int vida;
    int ataque;
    int defensa;
    int poder;
    int velocidad;
    int tipo;

}pokemon_int, aliado_int, enemigo_int;

void menu();
void registro();
void volver();

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
    getline (cin, pokemon.nombre);
    cout << endl;

    //Vida pokemon
    cout << "Vida: ";
    getline (cin, pokemon.vida);
    cout << endl;

    //Ataque pokemon
    cout << "Ataque: ";
    getline (cin, pokemon.ataque);
    cout << endl;

    //Defensa pokemon
    cout << "Defensa: ";
    getline (cin, pokemon.defensa);
    cout << endl;

    //Poder pokemon
    cout << "Poder: ";
    getline (cin, pokemon.poder);
    cout << endl;

    //Velocidad pokemon
    cout << "Velocidad: ";
    getline (cin, pokemon.velocidad);   
    cout << endl;

    //Tipo pokemon
    cout << "Tipo: ";
    getline (cin, pokemon.tipo);
    cout << endl;

    //Guardar en registro
    archivo << "Nombre: "    << pokemon.nombre    << endl;
    archivo << "Vida: "      << pokemon.vida      << endl;
    archivo << "Ataque: "    << pokemon.ataque    << endl;
    archivo << "Defensa: "   << pokemon.defensa   << endl;
    archivo << "Poder: "     << pokemon.poder     << endl;
    archivo << "Velocidad: " << pokemon.velocidad << endl;
    archivo << "Tipo: "      << pokemon.tipo      << endl << endl;

    cout << "Haz capturado a " << pokemon.nombre << "!!" << endl;
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

        //Imprimir lineax y saltar linea
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
///////////////////////////////////////////////////////////////////////
//Pokemon aliado

void p_aliado()
{
    ifstream archivo;

    string linea[7];

    //Saber si el pokemon esta en el registro
    int matchpokemon = 0;

    cout << "Introduzca el pokemon: ";
    cin >> aliado.nombre;
    cout << endl;

    //Renombrar el nombre para que sea igual a Nombre: XXXXXXXXX 
    //para que concuerde con el nombre en el Registro
    aliado.nombre = "Nombre: " + aliado.nombre;

    if (!archivo.is_open ())
    {

        archivo.open ("pokedex.txt", ios::in);

    }

    //Mientras el archivo tenga lineas ->
    while (getline (archivo, linea[0]))
    {

        //Si Nombre: XXXX == Nombre: XXXX ->
        if (aliado.nombre == linea[0])
        {

            //Obtener las siquientes lineas mientras no sea una linea[0] en blanco
            if (linea[0].find (aliado.nombre) != string::npos)
            {

                //Esto es la vida = linea 2
                getline (archivo, linea[0]);
                aliado.vida = linea[0];
                cout << aliado.vida << endl;

                //Esto es el ataque = linea 3
                getline (archivo, linea[1]);
                aliado.ataque = linea[1];
                cout << aliado.ataque << endl;

                //Esto es la defensa = linea 4
                getline (archivo, linea[2]);
                aliado.defensa = linea[2];
                cout << aliado.defensa << endl;

                //Esto es el poder = linea 5
                getline (archivo, linea[3]);
                aliado.poder = linea[3];
                cout << aliado.poder << endl;

                //Esto es la velocidad = linea 6
                getline (archivo, linea[5]);
                aliado.velocidad = linea[5];
                cout << aliado.velocidad << endl;

                //Esto es la tipo = linea 7
                getline (archivo, linea[6]);
                aliado.tipo = linea[6];
                cout << aliado.tipo << endl;

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

        //volver al menu principal
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

    cout << "Introduzca el pokemon contra el que quiere combatir: ", 
    cin >> enemigo.nombre, 
    cout << endl;

    //Renombrar el nombre para que sea igual a Nombre: XXXXXXXXX 
    //para que concuerde con el nombre en el Registro
    enemigo.nombre = "Nombre: " + enemigo.nombre;


    if (!archivo.is_open ())
    {

        archivo.open ("pokedex.txt", ios::in);

    }

    while (getline (archivo, linea[0]))
    {

        if (enemigo.nombre == linea[0])
        {

            if (linea[0].find (enemigo.nombre) != string::npos)
            {

            //Esto es la vida = linea 2
            getline (archivo, linea[0]);
            enemigo.vida = linea[0];
            cout << enemigo.vida << endl;

            //Esto es el ataque = linea 3
            getline (archivo, linea[1]);
            enemigo.ataque = linea[1];
            cout << enemigo.ataque << endl;

            //Esto es la defensa = linea 4
            getline (archivo, linea[2]);
            enemigo.defensa = linea[2];
            cout << enemigo.defensa << endl;

            //Esto es el poder = linea 5
            getline (archivo, linea[3]);
            enemigo.poder = linea[3];
            cout << enemigo.poder << endl;

            //Esto es la velocidad = linea 6
            getline (archivo, linea[5]);
            enemigo.velocidad = linea[5];
            cout << enemigo.velocidad << endl;

            //Esto es el tipo = linea 7
            getline (archivo, linea[6]);
            enemigo.tipo = linea[6];
            cout << enemigo.tipo << endl;

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

        //volver al menu principal
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
    
    //////////////////////////////////////////////////////////////////////
    //Datos para trabajar

    //Estadisticas numericas aliado
    aliado_int.vida      = srt_to_int(aliado.vida);
    aliado_int.ataque    = srt_to_int(aliado.ataque);
    aliado_int.defensa   = srt_to_int(aliado.defensa);
    aliado_int.poder     = srt_to_int(aliado.poder);
    aliado_int.velocidad = srt_to_int(aliado.velocidad);
    aliado_int.tipo      = srt_to_int(aliado.tipo);

    //Estadisticas numericas enemigo
    enemigo_int.vida      = srt_to_int(enemigo.vida);
    enemigo_int.ataque    = srt_to_int(enemigo.ataque);
    enemigo_int.defensa   = srt_to_int(enemigo.defensa);
    enemigo_int.poder     = srt_to_int(enemigo.poder);
    enemigo_int.velocidad = srt_to_int(enemigo.velocidad);
    enemigo_int.tipo      = srt_to_int(enemigo.tipo);

    ////////////////////////////////////////////////////////////////////////



        int primerturno;

        if (aliado_int.ataque > enemigo_int.ataque)
        {
            primerturno = 1;    

        }else if (aliado_int.ataque < enemigo_int.ataque)
        {
            primerturno = 0;
        }

}
