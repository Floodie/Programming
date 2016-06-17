//http://cppstudio.com/post/2606/
#include <iostream>
using namespace std;

int main()
{
	int number_1,number_2,number_3;
	cout<<"First number: ";
	cin>>number_1;
	cout<<"Second number: ";
	cin>>number_2;
	cout<<"Third number: ";
	cin>>number_3;

	if((number_1==number_2)||(number_1==number_3)||(number_2==number_3))
	{
		cout<<number_1+5<<endl<<number_2+5<<endl<<number_3+5;
	}
	else
	{
		cout<<"Ravnih net!";
	}
	cin>>number_1;
}