/*
####  Are the Numbers Equal?  ####

Create a function that returns true when num1 is equal to num2; otherwise return false.


[Examples]

___
isSameNum(4, 8) ➞ false

isSameNum(2, 2) ➞  true

isSameNum(2, "2") ➞ false
_____



[Notes]

Don't forget to return the result.


[conditions] [language_fundamentals] [numbers] [validation] 



-------------------------------------------------------------------
[Resources]
_________
Check if Two Numbers Are Equal Without Using Comparison Operators
https://www.geeksforgeeks.org/check-two-numbers-equal-without-using-comparison-operators/
Check if two numbers are equal without using comparison operators.
_________
_________
Check Whether Two Integers Are Equal or Not
https://www.w3resource.com/c-programming-exercises/conditional-statement/c-conditional-statement-exercises-1.php
Check whether two integers are equal or not.
_________

*/
//Your code should go here:
#include<iostream>
#include<ios>
using namespace std;

int isSameNum(float fNum1, float fNum2);

int main()
{
    isSameNum(2,4);
    isSameNum(2,5);
    isSameNum(6,6);
    isSameNum(7,7);
    isSameNum(0,0);
    return 0;
}

int isSameNum(float fNum1, float fNum2)
{
    if (fNum1 == fNum2)
    {
        std::cout << std::boolalpha<< true << std::endl;
        return 0;
    }
    else {
        std::cout << std::boolalpha<< false << std::endl;
        return 0;
    }
}

// The program is complete.