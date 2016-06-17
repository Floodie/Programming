//http://cppstudio.com/post/2631/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	int input;
	cout<<"1.Ponedelnik\n2.Vtornik\n3.Sreda\n4.Chetverg\n5.Pyatnica\n6.Subbota\n7.Voskresen'e\n";

	cout<<"Vvedite chislo(1..28) : ";
	cin>>input;

	while(input>7)
	{
		input=input-7;
	}

	switch(input)
	{
		case 1:cout<<"Ponedelnik!";
		break;
		case 2:cout<<"Vtornik!";
		break;
		case 3:cout<<"Sreda!";
		break;
		case 4:cout<<"Chetverg!";
		break;
		case 5:cout<<"Pyatnica!";
		break;
		case 6:cout<<"Subbota!";
		break;
		case 7:cout<<"Voskresen!";
		break;
	}

	getch();
}