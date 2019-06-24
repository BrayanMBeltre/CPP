#include <iostream>

using namespace std;


int
main ()
{

    char AB = '-';
    char ID = '|';
  int pos_x = 30;
  int pos_y = 10;
  int neg_x = - (pos_x);
  int neg_y = - (pos_y);
  
    for (int y = pos_y; y >= neg_y; y--)	//filas
    {
      for (int x = neg_x; x <= pos_x; x++)	//columnas
	  {
	     std::cout << "["<< x <<"," << y <<"]" ;
	  }
	  
    }
    
    cout << endl;
    
  for (int y = pos_y; y >= neg_y; y--)	//filas
    {
      for (int x = neg_x; x <= pos_x; x++)	//columnas
	  {
	    
	    bool espacio = true;
	    
	    ///////////////////////////////////////////////////////
	    
	    //marco

	    if(y == neg_y || y == pos_y) //top bottom
	    {
	        cout<< AB;
	        
	        espacio = false;
	    }else if(x == neg_x || x == pos_x) // left right
	    {
	        cout<< ID;
	        espacio = false;
	    }
	    ////////////////////////////////////////////////////////
	    
	    if(x == 15 && y == 5)
	    {
	        cout<< "+";
	        
	        espacio = false;
	    }
	    
	    if(x == 0 || y == 0 )
	    {
	        cout << ".";
	    }
	    
	    //////////////////////////////////////////////////////
	    //espacios vacios
	    if(espacio == true)
	    {
	        cout<< " ";
	    }
	    //////////////////////////////////////////////////////////////
	       
	  }
      cout << endl;
    }


  return 0;
}
