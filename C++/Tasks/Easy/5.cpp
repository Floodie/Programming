//http://cppstudio.com/post/1292/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	int k;

	cout<<"N^k :"<<endl<<"N : ";
	cin>>n;
	cout<<"k : ";
	cin>>k;

	int pow=n;

	for(int i=1;i<k;i++)
	{
		pow=pow*n;
	}

	cout<<pow;

	getch();
}