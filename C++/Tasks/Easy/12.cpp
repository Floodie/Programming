//http://cppstudio.com/post/1415/
//Ya nemnogo izmenyu i uznayu kol-vo strok v file
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
  string name;
  int length;
  cout<<"Name of file: ";
  cin>>name;
  const char* name_of_file=name.c_str();
  ifstream f(name_of_file);

  for(int i=1;!f.eof();++i)
    {
  getline(f, name);
  cout<<name<<endl;
  length=i;
    }

  cout<<length;
  getch();
}
