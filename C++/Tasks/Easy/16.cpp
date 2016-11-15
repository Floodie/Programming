//http://cppstudio.com/post/1310/
#include <iostream>
#include <conio.h>
using namespace std;

int interview(int correct_answer, string question)
{
  int answer;
  cout<<question;
  cin>>answer;
  if(answer==correct_answer){cout<<"Correctly!"<<endl;}
  else{cout<<"Wrong!"<<endl;}
}

int main()
{
  string question[3]={"2+2=","100*100=","0/1="};//answers
  interview(4, question[0]);
  interview(10000, question[1]);
  interview(0, question[2]);
  getch();
}
