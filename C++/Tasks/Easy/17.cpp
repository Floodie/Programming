//http://cppstudio.com/post/1342/
#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>  
using namespace std;

int main()
{
  srand (time(NULL));
  
  int Stolbov;
  int Strok;
  int result=0;
  cout<<"Stolbov: ";
  cin>>Stolbov;
  cout<<"Strok: ";
  cin>>Strok;

  int matrix[Strok][Stolbov];

  for(int i=0;i<Strok;++i)
    {
      for(int j=0;j<Stolbov;++j)
	{
	  matrix[i][j]=rand()%100;
	  cout<<setw(4)<<matrix[i][j];
	}
      cout<<endl;
    }

  for(int i=0;i<Strok;i++)
    {
      result=result+matrix[i][i];
    }
  cout<<result;
  getch();
}
