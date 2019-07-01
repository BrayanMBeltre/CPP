#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
   
using namespace std;

struct pokemon {
    
    string nombre;
    string ps;
    string ataque;
    string defensa;
    string atk_especial;
    string def_especial;
    string velocidad;
    string elemento;

}pokemon, aliado, enemigo;

struct pokemon_int {
    
    int ps;
    int ataque;
    int defensa;
    int atk_especial;
    int def_especial;
    int velocidad;
    int elemento;

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
        std::cout << "Pulse cualquier tecla para continuar..." << endl;
        cin.get();
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

    //Puntos de salud pokemon
    cout << "Puntos de salud: ";
    getline (cin, pokemon.ps);
    cout << endl;

    //Ataque pokemon
    cout << "Ataque: ";
    getline (cin, pokemon.ataque);
    cout << endl;

    //Defensa pokemon
    cout << "Defensa: ";
    getline (cin, pokemon.defensa);
    cout << endl;

    //ataque especial pokemon
    cout << "Ataque especial: ";
    getline (cin, pokemon.atk_especial);
    cout << endl;

    //defensa especial pokemon
    cout << "Defensa especial: ";
    getline (cin, pokemon.def_especial);
    cout << endl;

    //Velocidad pokemon
    cout << "Velocidad: ";
    getline (cin, pokemon.velocidad);   
    cout << endl;

    //Tipo pokemon
    cout << "Elemento: ";
    getline (cin, pokemon.elemento);
    cout << endl;

    //Guardar en registro
    archivo << "Nombre: "           << pokemon.nombre       << endl;
    archivo << "Puntos de salud: "  << pokemon.ps           << endl;
    archivo << "Ataque: "           << pokemon.ataque       << endl;
    archivo << "Defensa: "          << pokemon.defensa      << endl;
    archivo << "Ataque especial: "  << pokemon.atk_especial << endl;
    archivo << "Defensa especial: " << pokemon.atk_especial << endl;
    archivo << "Velocidad: "        << pokemon.velocidad    << endl;
    archivo << "Tipo: "             << pokemon.elemento     << endl << endl;

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

    string linea[8];

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

                //Esto es la ps = linea 2
                getline (archivo, linea[0]);
                aliado.ps = linea[0];
                cout << aliado.ps << endl;

                //Esto es el ataque = linea 3
                getline (archivo, linea[1]);
                aliado.ataque = linea[1];
                cout << aliado.ataque << endl;

                //Esto es la defensa = linea 4
                getline (archivo, linea[2]);
                aliado.defensa = linea[2];
                cout << aliado.defensa << endl;

                //Esto es el atk_especial = linea 5
                getline (archivo, linea[3]);
                aliado.atk_especial = linea[3];
                cout << aliado.atk_especial << endl;

                //Esto es el def_especial = linea 6
                getline (archivo, linea[4]);
                aliado.def_especial = linea[4];
                cout << aliado.def_especial << endl;

                //Esto es la velocidad = linea 7
                getline (archivo, linea[5]);
                aliado.velocidad = linea[5];
                cout << aliado.velocidad << endl;

                //Esto es la elemento = linea 8
                getline (archivo, linea[6]);
                aliado.elemento = linea[6];
                cout << aliado.elemento << endl;

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

    string linea[8];

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

            //Esto es la ps = linea 2
            getline (archivo, linea[0]);
            enemigo.ps = linea[0];
            cout << enemigo.ps << endl;

            //Esto es el ataque = linea 3
            getline (archivo, linea[1]);
            enemigo.ataque = linea[1];
            cout << enemigo.ataque << endl;

            //Esto es la defensa = linea 4
            getline (archivo, linea[2]);
            enemigo.defensa = linea[2];
            cout << enemigo.defensa << endl;

            //Esto es el atk_especial = linea 5
            getline (archivo, linea[3]);
            enemigo.atk_especial = linea[3];
            cout << enemigo.atk_especial << endl;

            //Esto es el def_especial = linea 6
            getline (archivo, linea[4]);
            enemigo.def_especial = linea[4];
            cout << enemigo.def_especial << endl;

            //Esto es la velocidad = linea 7
            getline (archivo, linea[5]);
            enemigo.velocidad = linea[5];
            cout << enemigo.velocidad << endl;

            //Esto es el elemento = linea 8
            getline (archivo, linea[6]);
            enemigo.elemento = linea[6];
            cout << enemigo.elemento << endl;

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

    //Mostrar estadisticas
    std::cout << "Presione cualquier tecla para ir a la batalla!!!" ;
    cin.get();
    cin.get();
    system("cls");
    system("clear");
    
    //////////////////////////////////////////////////////////////////////
    //Datos para trabajar

    //Estadisticas numericas aliado
    aliado_int.ps           = srt_to_int(aliado.ps);
    aliado_int.ataque       = srt_to_int(aliado.ataque);
    aliado_int.defensa      = srt_to_int(aliado.defensa);
    aliado_int.atk_especial = srt_to_int(aliado.atk_especial);
    aliado_int.def_especial = srt_to_int(aliado.def_especial);
    aliado_int.velocidad    = srt_to_int(aliado.velocidad);
    aliado_int.elemento     = srt_to_int(aliado.elemento);

    //Estadisticas numericas enemigo
    enemigo_int.ps           = srt_to_int(enemigo.ps);
    enemigo_int.ataque       = srt_to_int(enemigo.ataque);
    enemigo_int.defensa      = srt_to_int(enemigo.defensa);
    enemigo_int.atk_especial = srt_to_int(enemigo.atk_especial);
    enemigo_int.def_especial = srt_to_int(enemigo.def_especial);
    enemigo_int.velocidad    = srt_to_int(enemigo.velocidad);
    enemigo_int.elemento     = srt_to_int(enemigo.elemento);

    ////////////////////////////////////////////////////////////////////////
    //Combate

    //Estadistica ataque
    int aliado_ataque = aliado_int.ataque * 0.92;
    int enemigo_ataque = enemigo_int.ataque * 0.92;

    //Mientras los pokemones esten vivos
    while(aliado_int.ps > 0 && enemigo_int.ps > 0) 
    {

        int turno = 1;

        //Quien ataca primero
        if (aliado_int.velocidad > enemigo_int.velocidad)
        {
            turno = 1;

        }else if (enemigo_int.velocidad > aliado_int.velocidad)
        {
            turno = 0;
        }

        //ataque que hara el alidado
        int ataque_aliado;

        //Numeros siempre aleatorios
        srand(time(NULL));

        //Ataque random del enemigo
        int ataques_enemigo = 1 + rand() % 3;

        //Nombre pokemon aliado
        std::cout << aliado.nombre

        << "\t\t\t\t\t" 

        //Nombre pokemon Enemigo
        << enemigo.nombre << endl;

        //Vida pokemon aliado
        std::cout << "Vida = " << aliado_int.ps 

        << "\t\t\t\t\t" 

        //Vida pokemon Enemigo
        << "Vida = " << enemigo_int.ps << endl;

        //Defensa pokemon aliado
        std::cout << "Defensa = " << aliado_int.defensa 

        << "\t\t\t\t\t" 

        //Vida pokemon enemigo
        << "Defensa = " << enemigo_int.defensa << endl;

        cout << endl << endl; 

        //Ataques
        std::cout << "Atacar"              << endl;
        std::cout << "1.- Ataque normal"   << endl;
        std::cout << "2.- Ataque especial" << endl;
        std::cout << "3.- Bajar defensa"   << endl;
        std::cout << "Ataque: "; 
        std::cin >> ataque_aliado;

        //enemigo ataca primero
        if (turno == 0)
        {

            switch (ataques_enemigo)
            {
                 case 1: 

                        aliado_int.ps -= enemigo_ataque - aliado_int.defensa * (0.80);

                        std::cout << endl;

                        std::cout << aliado.nombre << " el enemigo ha usado ataque normal" << endl << endl;

                 break;
                 case 2: 

                        aliado_int.ps -= enemigo_int.atk_especial - aliado_int.def_especial * (0.92);

                        std::cout << endl;

                        std::cout << enemigo.nombre << " ha usado: Ataque Especial" << endl << endl;

                 break;
                 case 3: 

                        aliado_int.defensa = aliado_int.defensa - 6;

                        std::cout << endl;

                        std::cout << enemigo.nombre << " ha usado: Latigo" << endl << endl;

                 break;
                 default: 

                        std::cout << "El enemigo uso una opcion invalida" << endl << endl;

                 break;
            }

///////////////////////////////////////////////////////////////////////

            switch (ataque_aliado)
            {
                case 1: 

                        enemigo_int.ps -= ataque_aliado - enemigo_int.defensa * (0.80);

                        std::cout << endl;

                        std::cout << aliado.nombre << " ha usado ataque normal" << endl << endl;

                 break;
                 case 2: 

                        enemigo_int.ps -= aliado_int.atk_especial - enemigo_int.def_especial * (0.92);

                        std::cout << endl;

                        std::cout << aliado.nombre << " ha usado: Ataque Especial" << endl << endl;

                 break;
                 case 3: 

                        enemigo_int.defensa = enemigo_int.defensa - 6;

                        std::cout << endl;

                        std::cout << aliado.nombre << " ha usado: Latigo" << endl << endl;

                 break;
                 default: 

                        std::cout << "usaste una opcion invalida"   << endl;

                 break;
            }


        //Aliado ataca primero
        }else if (turno == 1)
        {

            switch (ataque_aliado)
            {
                 case 1: 

                        enemigo_int.ps -= aliado_ataque - enemigo_int.defensa * (0.80);

                        std::cout << endl;

                        std::cout << aliado.nombre << " ha usado ataque normal" << endl << endl;

                 break;
                 case 2: 

                        enemigo_int.ps -= aliado_int.atk_especial - enemigo_int.def_especial * (0.92);

                        std::cout << endl;

                        std::cout << aliado.nombre << " ha usado: Ataque Especial" << endl << endl;

                 break;
                 case 3: 

                        enemigo_int.defensa = enemigo_int.defensa - 6;

                        std::cout << endl;

                        std::cout << aliado.nombre << " ha usado: Latigo" << endl << endl;

                 break;
                 default: 

                        std::cout << "usaste una opcion invalida"   << endl;

                 break;
            }

///////////////////////////////////////////////////////////////////////////////

            switch (ataques_enemigo)
            {
                 case 1: 

                        aliado_int.ps -= enemigo_ataque - aliado_int.defensa * (0.80);

                        std::cout << endl;

                        std::cout << enemigo .nombre << " ha usado ataque normal" << endl << endl;

                 break;
                 case 2: 

                        aliado_int.ps -= enemigo_int.atk_especial - aliado_int.def_especial * (0.92);

                        std::cout << endl;

                        std::cout << enemigo.nombre << " ha usado: Ataque Especial" << endl << endl;

                 break;
                 case 3: 

                        aliado_int.defensa = aliado_int.defensa - 6;

                        std::cout << endl;

                        std::cout << enemigo.nombre << " ha usado: Latigo" << endl << endl;

                 break;
                 default: 

                        std::cout << "El enemigo uso una opcion invalida" << endl;

                 break;
                }

        }

        //Parar luego del ataque
        cin.get();
        cin.get();

        // Limpiar
        system("clear");


    }
    


    if (aliado_int.ps < 0)
    {
        std::cout << "Perdiste..." << endl;

    }else if (enemigo_int.ps < 0)
    {
        std::cout << "Ganaste!!!" << endl;
    }

    exit(1);

}


