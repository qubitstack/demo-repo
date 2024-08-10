# Functions that Interpreter and/or Compiler perform on a program:-
## 1. Check for errors.
## 2. Convert into Machine Code.
## 3. Execution (Interpreter is involved in the execution and not the compiler).

# Example:-

``` c++
int add(int a,int b)
{  int c;
   c=a+b;
   return c;

}
int main()
{  int x,y,z;
   x=10;
   y=11;
   z=add(x,y);
   cout<<z<<endl;
   return 0;  
}


