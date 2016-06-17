#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	string str;
	cin>>str;
    const char* x=str.c_str();;
    ofstream f(x);
    cin>>str;
    f<<str;
}