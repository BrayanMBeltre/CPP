#include <iostream>

using namespace std;


int
main ()
{

  int pos_x = 2;
  int pos_y = 2;
  int neg_x = - (pos_x);
  int neg_y = - (pos_y);

  for (int y = pos_y; y >= neg_y; y--)	//filas
    {
      for (int x = neg_x; x <= pos_x; x++)	//columnas
	  {
	    
	    std::cout << "["<< x <<"," << y <<"]" ;
	       
	  }
      cout << endl;
    }


  return 0;
}
