//http://cppstudio.com/post/1375/
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
  int quantity;
  cin>>quantity;
  float number[quantity];
  float result=0;
  for(int i=0;i<quantity;++i)
    {
      number[i]=rand()%100;
      float x=(rand()%100);
      x=x/100;
      number[i]=number[i]+x;
      cout<<number[i]<<"  ";
      result=result+number[i];
    }
  cout<<endl;
  cout<<result/quantity;
  getch();
}
