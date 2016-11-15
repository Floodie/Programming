//http://cppstudio.com/post/2620/
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
  int number;
  int symbols[10];
  int len;
  bool have=false;
  cin>>number;
  
  for(int i=0;number>0;++i)
    {
      cout<<number%10<<endl;
      symbols[i]=number%10;
      number=(number-number%10)/10;
      len=i;
    }

  for(int i=0;i<len;++i)
    {
      for(int j=i+1;j<len;++j)
	{
	  if(symbols[i]==symbols[j]){cout<<"+";have=true;}
	}
    }
  if(have==false){cout<<"-";}
  getch();
  return 0;
}
