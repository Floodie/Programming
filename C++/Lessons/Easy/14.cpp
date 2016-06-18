//DODELAT'
//http://cppstudio.com/post/2629/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;


void main0(int lenO, int x)
{
  for(int i=0;i<x;i++)cout<<" ";
  cout<<"*";
  for(int i=0;i!=(lenO/2-x-1)*2;i++)cout<<" ";
  cout<<"*"<<endl;
  if(x>0)main0(lenO, x-1);
  for(int i=0;i<x;i++)cout<<" ";
  cout<<"*";
  for(int i=0;i!=(lenO/2-x-1)*2;i++)cout<<" ";
  cout<<"*"<<endl;
}

void main1(int lenO, int x)
{
  for(int i=0;i<x;i++)cout<<" ";
  cout<<"*";
  for(int i=0;i!=(lenO/2-x)*2;i++)cout<<" ";
  if(lenO/2-1!=x)cout<<"*";
  cout<<endl;
  if(x>0)main1(lenO, x-1);

  if(x>0)
    {
  for(int i=0;i<x;i++)cout<<" ";
  cout<<"*";
  for(int i=0;i!=(lenO/2-x)*2;i++)cout<<" ";
  if(lenO/2-1!=x)cout<<"*"<<endl;
    }
  //else{cout<<endl;}
}

int main()
{
  int length;
  cin>>length;
  
  if(length%2==0)main0(length, length/2-1);
  else{main1(length, length/2);}

  getch();
  return 0;
}
