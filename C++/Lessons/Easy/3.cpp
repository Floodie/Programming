//http://cppstudio.com/post/2612/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	int number;
	cout<<"VVedite chislo: ";
	cin>>number;
	int R[16];
	int length;

	for(int i=0;number > 0; i++)
	{
		R[i]=number%10;
		number=(number-number%10)/10;
		length=i;
	}

	cout<<"---------"<<endl;

	for(int i=0;i<length+1;i++)
	{

		for(int j=i;j<length+1;j++)
		{
			if( R[i] > R[j] ){int old=R[i];R[i]=R[j];R[j]=old;}
		}

	}

	for(int i=0 ; i< length +1 ; ++i)
	{
		cout<<R[i]<<endl;
	}

	getch();
}