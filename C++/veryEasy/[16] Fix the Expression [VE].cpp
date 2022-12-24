/*
####  Fix the Expression  ####

Fix the code in the Code tab so the function returns true if and only if x is equal to 7. Try to debug code and pass all the tests.


[Examples]

___
isSeven(4) ➞ false

isSeven(9) ➞ false

isSeven(7) ➞ true
_____



[Notes]

The bug can be hard to find, so look closely!


[bugs] [language_fundamentals] [validation] 



-------------------------------------------------------------------
[Resources]
_________
The Conditional Operator (?:)
http://www.cplusplus.com/articles/1AUq5Di1/
Returns one of two values depending on the result of an expression.
_________

*/
//Your code should go here:

#include <iostream>
#include <ios>
using namespace std;
int isSeven(float fNum1);

int main()
{
    isSeven(1);
    isSeven(2);
    isSeven(3);
    isSeven(4);
    isSeven(5);
    isSeven(6);
    isSeven(7);
    return 0;
}

int isSeven(float fNum1)
{
    if (fNum1 == 7)
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