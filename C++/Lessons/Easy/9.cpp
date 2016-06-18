//http://cppstudio.com/post/1352/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	double pi = 3.1415926535;
	int x;
	int y;
	int result;

	cout<<"X: ";
	cin>>x;
	cout<<"Y: ";
	cin>>y;

	result = pow ( ( tan ( x ) - 1 ), ( 1 / tan ( x ) ) ) + cos(  x  -  y  );

	cout<<result;

	getch();
}