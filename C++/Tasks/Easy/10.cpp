//http://cppstudio.com/post/2623/
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{

  float x,y;
  cout<<"Vvedite x, y: \n";
  cin>>x>>y;

  if(x>0&&y>0){cout<<"I";}
  if(x<0&&y>0){cout<<"II";}
  if(x>0&&y<0){cout<<"IV";}
  if(x<0&&y<0){cout<<"III";}
  if(x==0&&y==0){cout<<"Center";}

  getch();
}
