#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void registro ();
void ingresar ();
void leerdatos ();




int
main ()
{

  int op;

  cout <<
    "1.- Nuevo registro\n2.- Ingresar\n3.- Leer datos\nIntroduzca la opcion deseada: ";
  cin >> op;
  cin.ignore ();

  if (op == 1)
    {
      registro ();
    }
  else if (op == 2)
    {

      ingresar ();
    }
  else if (op == 3)
    {
      leerdatos ();
    }







  return 0;
}



void
registro ()
{

  ofstream archivo;
  string nick, email, password;

  archivo.open ("registro.txt", ios::app | ios::out);

  if (archivo.fail ())
    {
      cout << "No se ha abierto el archivo.";
      exit (1);
    }

  cout << "Nombre: ";
  getline (cin, nick);

  cout << "Email: ";
  getline (cin, email);

  cout << "Contrasena: ";
  getline (cin, password);


  //Guardar en archivo
  archivo << "Nombre: " << nick << endl;
  archivo << "Email: " << email << endl;
  archivo << "Contrasena: " << password << endl << endl;

  archivo.close ();

}



void
ingresar ()
{

  ifstream archivo;
  string usuario, texto, linea, linea2, linea3, password;
  int res = 0;

  cout << "Introduzca el usuario: ";
  cin >> usuario;
  cout << endl;

    usuario = "Nombre: "+usuario;

    cout<<"Actualmente usuario = " << usuario<<endl;

  if (!archivo.is_open ())
    {

      archivo.open ("registro.txt", ios::in);

    }
    

  while (getline (archivo, linea))
    {
      if (linea.find (usuario) != string::npos)
	{


	  cout << linea << endl;
        cout<<"Introduzca contrasena: ";
        cin>> password;
        cout<<endl;


            getline (archivo, linea3);
	        cout << linea3 << endl;

            if(linea3 == password  ){

                cout<<"LAS CONTRASENAS SON IGUALES!!!";
            }


        

	  res = 1;
	}
    }


  if (res == 0)
    {
      int op;
      cout << usuario << "usuario no encontrado..." << endl;

      cout <<
	"Quiere registrarse?\n1.- Si\n2.- No\nIntroduzca la opcion deseada:";
      cin >> op;
      cout << endl;

      if (op == 1)
	{
	  main ();

	}
      else if (op == 2)
	{
	  exit (1);
	}
    }


  archivo.close ();

  exit (1);


}


void
leerdatos ()
{

  ifstream archivo;
  string texto;


  if (!archivo.is_open ())
    {

      archivo.open ("registro.txt", ios::in);

    }

  while (getline (archivo, texto)){


	  cout << texto << endl ;
	  getline (archivo, texto );
      cout<<endl;


	
	}
    




  archivo.close ();

  exit (1);

}
