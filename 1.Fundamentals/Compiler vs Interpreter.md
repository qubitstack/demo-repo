# Functions that Interpreter and/or Compiler perform on a program:-
### 1. Check for errors. <br/>
### 2. Convert into Machine Code.<br/>
### 3. Execution (Interpreter is involved in the execution and not the compiler).

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

```
* Here we have created two functions add and main, the compiler will convert our source code into machine code for both add and main functions each. Our file say main.cpp is stored in the HDD, upon being called by the compiler, if there are no errors then the compiler will create an executable file called main.exe. Now the work of compiler is over and execution begins. An interpreter is only needed for running the program as translation occurs only once if the file doesnt contain any bugs.
* An interpreter translates and executes simultaeneously(depending upon the language) line by line.



## Key differences between a compiler and an interpreter:-

| Compiler | Interpreter|
|-----------|------------|
|   A compiler will create machine code for each line of the program and create an executable(exe) file for the whole program.        |   An interpreter on the other hand does not create an executable file, it is instead involved in the execution of the file.       |
|            |           | 



  

