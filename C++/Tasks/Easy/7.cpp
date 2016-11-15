//http://cppstudio.com/post/4618/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	float x,y,z;
	cout<<"X : ";
	cin>>x;
	cout<<"Y : ";
	cin>>y;
	cout<<"Z : ";
	cin>>z;

	cout<<"Length of vector = "<<sqrt( x * x + y * y + z * z );

	getch();
}