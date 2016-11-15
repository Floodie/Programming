//http://cppstudio.com/post/1412/
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"Name of file: ";
	string name;
	cin>>name;
	const char* name_of_file=name.c_str();
	ifstream file(name_of_file);
	
	int start=0;
	int end=0;
	char out;
	file>>out;
	while(file)
	{
		if(out=='{'){start++;}
		if(out=='}'){end++;}
		file>>out;
	}
	
	if(start==end){cout<<"Vse normalno";}
	else{cout<<"Narusheno";}
	
	cout<<endl<<"Open: "<<start<<endl<<"Close: "<<end;
	
	getch();
	getch();
}