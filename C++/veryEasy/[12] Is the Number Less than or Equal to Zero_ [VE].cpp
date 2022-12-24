/*
####  Is the Number Less than or Equal to Zero?  ####

Create a function that takes a number as its only argument and returns true if it's less than or equal to zero, otherwise return false.


[Examples]

___
lessThanOrEqualToZero(5) ➞ false

lessThanOrEqualToZero(0) ➞ true

lessThanOrEqualToZero(2) ➞ false
_____



[Notes]

___
*) Don't forget to return the result.
*) If you get stuck on a challenge, find help in the Resources tab.
*) If you're really stuck, unlock solutions in the Solutions tab.
___



[conditions] [language_fundamentals] [validation] 



-------------------------------------------------------------------
[Resources]
_________
Using an "If Else" statement
https://www.tutorialspoint.com/cplusplus/cpp_if_else_statement.htm
By using an if else statement, you can return true or false depending on the statements
_________
_________
Comparison Operators
https://en.cppreference.com/w/cpp/language/operator_comparison
Compares the arguments.
_________
_________
List of Types of Numbers
https://en.wikipedia.org/wiki/List_of_types_of_numbers
Numbers can be classified according to how they are represented or according to the properties that they have.
_________

*/
//Your code should go here:

#include <iostream>
#include <ios>
using namespace std;
int lessEither0(float fNum1);

int main()
{
    lessEither0(0);
    lessEither0(1);
    lessEither0(-2);
    lessEither0(-11);
    return 0;
}

int lessEither0(float fNum1)
{
    if (fNum1<=0)
    {
    std::cout << std::boolalpha << true << "\n";
        return 0;
    }
    else{
        std::cout << std::boolalpha << false << "\n";
        return 0;
    }
}

// The program is complete.