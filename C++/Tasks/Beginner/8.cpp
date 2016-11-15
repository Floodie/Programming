//http://cppstudio.com/post/2608/
#include <iostream>
using namespace std;

int main()
{
	cout<<"First number: ";
	int number_1;
	cin>>number_1;
	cout<<"Second number: ";
	int number_2;
	cin>>number_2;

	if(number_1>number_2)cout<<"First number bol'she";
	if(number_1<number_2)cout<<"Second number bol'she";
	if(number_1==number_2)cout<<"Oni ravni";

	cin>>number_1;
}