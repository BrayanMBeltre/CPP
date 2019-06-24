#include <iostream>

using namespace std;


int
main ()
{

  int marcox = 20;
  int marcoy = 10;

  for (int i = -10; i < marcoy; i++)	//filas
    {
      for (int j = -20; j < marcox; j++)	//columnas
	{
	  
	  bool dibujado = false;
	  
	  if (i == 0 || j == 0 || i == marcoy -1 || j == marcox -1    || i == -10 || j == -20 )
	    {
	      std::cout << "*";
	      
	      dibujado = true;
	      
	    }
	    
	   if(i == marcoy/2 && j == marcox/2)
	   {
	       std::cout << "*";
	       
	       dibujado = true;
	       
	   }
	   
        
        
	   
	   
	   if (dibujado == false)
	   {
	       cout << " ";
	   }

	}

      cout << endl;
    }


  return 0;
}
