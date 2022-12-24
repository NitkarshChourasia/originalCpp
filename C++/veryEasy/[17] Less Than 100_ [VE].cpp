/*
####  Less Than 100?  ####

Given two numbers, return true if the sum of both numbers is less than 100. Otherwise return false.


[Examples]

___
lessThan100(22, 15) ➞ true
// 22 + 15 = 37

lessThan100(83, 34) ➞ false
// 83 + 34 = 117

lessThan100(3, 77) ➞ true
_____



[Notes]

N/A


[language_fundamentals] [math] [validation] 



-------------------------------------------------------------------
[Resources]
_________
Built-in Operators, Precedence and Associativity
https://docs.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=vs-2019
The C++ language includes all C operators and adds several new operators. Operators specify an evaluation to be performed on one or more operands.
_________

*/
//Your code should go here:

#include <iostream>
#include <ios>
using namespace std;
int sumLess100(float fNum1, float fNum2);

int main()
{
    sumLess100(20, 30);
    sumLess100(60, 30);
    sumLess100(80, 30);
    sumLess100(90, 30);
    return 0;
}

int sumLess100(float fNum1 , float fNum2)
{
    if (fNum1 + fNum2 < 100)
    {
        std::cout << std::boolalpha << true << "\n";
        return 0;
    }
    else
    {
        std::cout << std::boolalpha << false << "\n";
        return 0;
    }
}

// The program is complete.