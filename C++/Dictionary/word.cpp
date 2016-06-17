#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

string word;
ofstream file("words.txt");
int line;
char again='y';

while(again=='y')
{
getline(cin, word);
file<<word;
file<<" - ";
getline(cin, word);
file<<word;
file<<endl;
}

}