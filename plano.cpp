#include <iostream>

using namespace std;


int main ()
{

    char AB = '-';
    char ID = '|';
    int pos_x = 30;
    int pos_y = 10;
    int neg_x = - (pos_x);
    int neg_y = - (pos_y);
  
    int coordX1;
    int coordY1;
    int coordX2;
    int coordY2;
    

    
    
    std::cout << "ingrese la coordenada X1: ";
    std::cin >> coordX1;
    
    std::cout << "ingrese la coordenada Y1: ";
    std::cin >> coordY1;
    
    std::cout << "ingrese la coordenada X2: ";
    std::cin >> coordY2;
    
    std::cout << "ingrese la coordenada Y2: ";
    std::cin >> coordX2;
    
    int vector1 = coordX2 - coordX1;
    int vector2 = coordY2 - coordY1;
  
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
	    
	    if(x == coordX1 && y == coordY1)
	    {
	        cout<< "+";
	        
	        espacio = false;
	    }
	    
	    if(x == coordX2 && y == coordY2)
	    {
	        cout<< "+";
	        
	        espacio = false;
	    }
	    
	    if(x == vector1 && y == vector2)
	    {
	        cout<< "+";
	        
	        espacio = false;
	    }
	    
	    if(x == 0 || y == 0 && y < pos_x )
	    {
	        cout << ".";
	        
	        espacio = false;
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
