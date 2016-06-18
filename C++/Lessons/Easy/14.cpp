//http://cppstudio.com/post/1448/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int number;
  int symbol[10];
  int length;
  int cifra;
  cout<<"Vvedite chislo: ";
  cin>>number;
  cout<<"Vvedite poryadkoviyu nimer cifri: ";
  cin>>cifra;
  
  for(int i=0;number>=1;++i)
    {
      symbol[i]=number%10;
      number=(number-number%10)/10;
      length=i;
    }

  for(int i=0;i<length/2+1;i++)
    {
      int old=symbol[i];
      symbol[i]=symbol[length-i];
      symbol[length-i]=old;
    }

  cout<<"Eto "<<symbol[cifra-1];

  getch();
}
