/*
####  Is the Number Less than or Equal to Zero?  ####

Create a function that takes a number as its only argument and returns true if it's less
than or equal to zero, otherwise return false.


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
using std::cout;
using std::endl;
using std::boolalpha;

int less0EqualT(int x);

int main(){
    less0EqualT(9);
    less0EqualT(4);
    less0EqualT(989);
    less0EqualT(0);
    less0EqualT(-12);
    return 0;
}

int less0EqualT(int x){
    if (x <= 0){
        cout << boolalpha << true << endl;
        return 0;
    }
    else{
        cout << boolalpha << false << endl;
        return 0;
    }
    return 0;
}

// The program is complete.