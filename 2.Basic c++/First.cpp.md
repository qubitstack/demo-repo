``` c++

#include <iostream> // "#" is called a preprocessor statement, the entire line gets processed before the file is compiled.
                    // <iostream> is a header file or a library, in some compilers it is written with .h extension.

using namespace std; // namespace is a region that provides scope to identifiers(functions,variables etc)  here we only want 
                        std from namespace . "using namespace std" brings all the identifiers from std namespace to the current 
                        scope, all identifiers arent bought as they may cause naming conflicts.
                      

int main()          // int is a return type for the function, main is the function header and {} represent body of the function.
{ 
 cout<<"Hello World"; // cout used with insertion operator to display the data in the output console
 return 0;
}

// Program to add two numbers x and y
int main()
{ int x,y,sum;  // declaring variables
  cout<<"Enter values of x and y:"; // taking user input
  cin>>x>>y; // putting values first in x then in y
  sum=x+y;   // taking sum
  cout<<The sum is :\t<<sum<<endl; // printing out the sum


  return 0; 
}

// Print a string after taking input.
``` c++
int main()
{ string str;
  cout<<"Enter the string."<<endl;
  cin>>str;
  cout<<"The string is:"<<str<<endl;
  return 0; 
}


