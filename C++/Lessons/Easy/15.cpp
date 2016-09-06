//http://cppstudio.com/post/1363/
#include <iostream>
#include <conio.h>
using namespace std;

void is10to16(int x)
{
  //cout<<x%16;
  if(x>15){is10to16(x/16);}
  switch(x%16)
    {
    case 10:
      cout<<"a";
      break;
    case 11:
 cout<<"b";
      break;
    case 12:
 cout<<"c";
      break;
    case 13:
 cout<<"d";
      break;
    case 14:
 cout<<"e";
      break;
    case 15:
 cout<<"f";
      break;
    default:
 cout<<x%16;
      break;
    }
}

int main()
{
  setlocale(LC_ALL, "Russian");
  int number;
  cout<<"Введите число: ";
  cin>>number;
  is10to16(number);
  getch();
}
