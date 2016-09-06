//http://cppstudio.com/post/4968/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	float V, T, a;
	float g=9.8;
	float Pi=3.14154849;
	cout<<"V : ";
	cin>>V;
	cout<<"T : ";
	cin>>T;

	a = asin(g*T/(2*V));
	cout<<a * (90/asin(1.0)); 

	getch();
}