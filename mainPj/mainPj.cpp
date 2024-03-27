using namespace std;
#include <iostream>

int
main ()
{
  int ogr = 0;
  for (int i = 1; i <= 8; i++)
	{
	  for (int j = 0; j <= 8; j++)
	  {
	      if(j == 0)
	      {
	      cout << "a" << i << " ";
	      }
	      else if(j == 1)
	      {
	      cout << "b" << i<< " ";
	      }
	      else if(j == 2)
	      {
	      cout << "с" << i<< " ";
	      }
	      else if(j == 3)
	      {
	      cout << "d" << i<< " ";
	      }
	      else if(j == 4)
	      {
	      cout << "e" << i<< " ";
	      }
	      else if(j == 5)
	      {
	      cout << "f" << i<< " ";
	      }
	      else if(j == 6)
	      {
	      cout << "g" << i<< " ";
	      }
	      else if(j == 7)
	      {
	      cout << "h" << i<< " ";
	      }

	  }
	  cout << "\n";
	}

}
