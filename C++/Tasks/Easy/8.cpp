//http://cppstudio.com/post/1435/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{

	for(double x=-1.1;x<0.3;x)
	{
		cout<<"x: "<<x<<endl;
		for(double m=1;m<5;++m)
		{
			cout<<"M: "<<m<<" =  ";
			double xm=x;
			double sm=sin(x*m);
			double s=sm;
			for(int i = 1;i<m;i++){xm=xm*x;}
			for(int i = 1;i<m;i++){sm=sm*s;}
			cout<<xm*sm<<endl;
		}
		cout<<endl;
		x=x+0.2;
	}

	getch();
}
//x^m * sin^m(x*m)