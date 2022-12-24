/*
####  No Conditionals?  ####

Write a function that returns 0 if the input is 1, and returns 1 if the input is 0.


[Examples]

___
flip(1) ➞ 0

flip(0) ➞ 1
_____



[Notes]

Try completing this challenge without using any:
___
*) Conditionals
*) Ternary operators
*) Negations
*) Bit operators
___



[control_flow] [logic] 



-------------------------------------------------------------------
[Resources]
_________
!
http://www.cplusplus.com/doc/tutorial/operators/
Is the C++ operator for the Boolean operation NOT.
_________

*/
//Your code should go here:

#include <iostream>
using namespace std;
int flip(int int1);

int main()
{
    flip(1);
    flip(0);
    flip(1001);
    flip(31);
    return 0;
}

int flip(int int1)
{
    if (int1 == true)
    {
        cout << false << endl;
        return 0;
    }
    else
    {
        cout << true << endl;
        return 0;
    }
}