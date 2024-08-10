## Operators in C++ can be classified into 6 types:

###  1.Arithmetic Operators <br/> 2.Relational Operators<br/>3.Logical Operators<br/>4.Bitwise Operators<br/>5.Assignment Operators<br/>6.Ternary or Conditional Operators

![OperatorsinCPP](https://github.com/user-attachments/assets/702c78e1-376b-4eb8-8aed-b83edd8eafdd)

***Note: ++a and a++, both are increment operators, however, both are slightly different.In ++a, the value of the variable is incremented first and then It is used in the program. In a++, the value of the variable is assigned first and then It is incremented. Similarly happens for the decrement operator.***

### Time Complexity: O(1)
### Auxiliary Space : O(1)
***Note: The Modulo operator(%) operator should only be used with integers.***


|Operation|Assumed Precedence|
|----------|------------------|
| Parenthesis ( ) | 3 |
| * , / , % | 2 |
| + , - | 1 |


## Operator Precedence Example:-
say we have the expression a+b*c-d/e, here both * and / are present which have high precedence, moving from left to right, we see that * gets executed first and then /, the expression is evaluated as follows:-

***a+(bc)-(d/e)***

