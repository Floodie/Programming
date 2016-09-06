//http://cppstudio.com/post/1339/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	int n,k,summ;
	summ=0;
	cout<<"Summ = 1^k + 2^k + 3^k + … + N^k."<<endl<<"N = ";
	cin>>n;
	cout<<"K = ";
	cin>>k;

	for(int i = 1; i < n + 1 ; ++i )
	{
		summ+=pow(i, k);
	}
	cout<<"Result: "<<summ;
	getch();
}