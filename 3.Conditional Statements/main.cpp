#include <iostream> // Program to find the max of two numbers.
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter the numbers:\t";
  cin>>a>>b;
  if(a>b)
  {
    cout<<"A is greater";
  }
  else
  {
    cout<<"B is greater";
  }
  return 0;
}


// Another example:-

int main() // starting point of program
{
  if(0) // 0/false will be understood as false, only the else block will be executed.
  {
    cout<<"Hello World"<<endl;
  }
  else
  {
    cout<<"Bye"<<endl;
  }
  return 0;
}

int main() // starting point of program
{
  if(1) // 1/true/any non zero number will be understood as true, only the if block will be executed.
  {
    cout<<"Hello World"<<endl;
  }
  else
  {
    cout<<"Bye"<<endl;
  }
  return 0;
}
