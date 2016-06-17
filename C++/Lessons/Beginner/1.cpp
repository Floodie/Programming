//http://cppstudio.com/post/2591/
#include <iostream>
using namespace std;

void num(int x)
{
	int y=x%10;
	x=(x-x%10)/10;
	if(x>1){num(x);}
	cout<<y<<endl;
}

int main()
{
	int number;
	cin>>number;
	num(number);
	cin>>number;
}