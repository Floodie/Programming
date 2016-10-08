#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int length = 114;//колличество строк
	ifstream first("words.txt");//файл из которого берем слова
	string word[length][2];
	for(int i=0;i<length;i++)
	{
		first>>word[i][1];
		first>>word[i][2];
		first>>word[i][2];
	}
	
	ofstream second("words3.txt");//файл в который записываем

	for(int i=0;i<length;i++)
	{
		second<<word[i][2];
		second<<" - ";
		second<<word[i][1]<<endl;
	}
}