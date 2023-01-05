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
// Your code should go here:

#include <iostream>
using std::cout;
using std::endl;

int flip(int x);

int main()
{
    cout << flip(1) << endl;
    cout << flip(13) << endl;
    cout << flip(true) << endl;
    cout << flip(false) << endl;
    cout << flip(0) << endl;
    return 0;
}

int flip(int x)
{
    // return x ^ 1; // XOR operator, Should learn about it.
    return !x;
}

// The program is complete.