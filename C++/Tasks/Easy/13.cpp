//http://cppstudio.com/post/1426/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
  float x_box, y_box, x_o, y_o;

  cout<<"x box: ";
  cin>>x_box;
  cout<<"y box: ";
  cin>>y_box;
  cout<<"x otverstiya: ";
  cin>>x_o;
  cout<<"x otverstiya: ";
  cin>>y_o;

  if(x_o>=x_box&&y_o>=y_box){cout<<"+";}
  else{cout<<"-";}

  getch();
  return 0;
}
