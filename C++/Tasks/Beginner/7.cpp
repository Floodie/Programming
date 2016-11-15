//http://cppstudio.com/post/2573/
#include <iostream>
using namespace std;

int main()
{
	char symbol;
	int length;
	cout<<"Symbol: ";
	cin>>symbol;
	cout<<"Length: ";
	cin>>length;

	for(int i=0;i<length;i++)
	{
		for(int j=0;j<i+1;j++)cout<<symbol;
		cout<<endl;
	}
	cin>>symbol;
}