//http://cppstudio.com/post/1321/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int kol;
	cout<<"Kollichestvo x-sov: ";
	cin>>kol;
	double x[kol], a, b, z, betta;
	double y=0;
	
	for(int i=0;i<kol;i++)
	{
		cout<<"Vvedite chisla: "<<endl;
		cout<<"Z = ";
		cin>>z;
		cout<<"B = ";
		cin>>b;
		cout<<"A = ";
		cin>>a;
		cout<<"Betta = ";
		cin>>betta;

		x[i]= pow(z, 3) - b + pow(a, 2)  / pow(tan(betta), 2);
		y=y+x[i];
	}
	cout<<y;
	cin>>x[1];
}