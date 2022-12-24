/*
####  Are the Numbers Equal?  ####

Create a function that takes two integers and checks if they are equal.


[Examples]

___
isEqual(5, 6) ➞ false

isEqual(1, 1) ➞ true

isEqual(36, 35) ➞ false
_____



[Notes]

N/A


[conditions] [language_fundamentals] [logic] 



-------------------------------------------------------------------
[Resources]
_________
How do I get the type of a variable?
https://stackoverflow.com/questions/11310898/how-do-i-get-the-type-of-a-variable
In C++, how does one find the type of a variable?
_________
_________
Comparison Operators
https://en.cppreference.com/w/cpp/language/operator_comparison
Operators that compare arguments.
_________
_________
C++ Conditional ? : Operator
https://www.tutorialspoint.com/cplusplus/cpp_conditional_operator.htm
Where Exp1, Exp2, and Exp3 are expressions. Notice the use and placement of the colon. The value of a ? expression is determined like this: Exp1 is evaluated. If it is …
_________

*/
//Your code should go here:

#include <iostream>
#include <ios>
// using namespace std;

int isEqual(float fNum1, float fNum2);

int main()
{
    isEqual(10, 10);
    isEqual(20, 30);
    isEqual(50, 60);
    isEqual(50, 50);
    isEqual(101, 102);
    return 0;
}

int isEqual(float fNum1, float fNum2)
{
    if (fNum1 == fNum2)
    {
        std::cout << std::boolalpha << true << "\n";
        return 0;
    }
    else {
        std::cout << std::boolalpha << false << "\n";
    }
    return 0;
}

// The program is complete.