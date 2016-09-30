#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file("word.txt");
	ofstream ofile("red-word.txt");
	string word;

	ofile<<"<table>"<<endl;

	while(file.eof())
	{
		ofile<<"<tr>"<<endl<<"<td>";
		do
		{
			file>>word;
			ofile<<word;
		}while(word!="-");
		ofile<<"</td>"<<"<td>";
		do
		{
			file>>word;
			ofile<<word;
		}while(word!=";");
		ofile<<"</td>"<<"</tr>"<<endl;
	}

	return 0;
}