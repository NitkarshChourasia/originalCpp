/*
####  Fix the Expression  ####

Fix the code in the Code tab so the function returns true if and only if x is equal to 7.
Try to debug code and pass all the tests.


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
using std::cout;
using std::endl;
using std::boolalpha;

int isSeven(float x);

int main(){
    isSeven(10);
    isSeven(71);
    isSeven(0);
    isSeven(31.2);
    isSeven(7);
    return 0;
}

int isSeven(float x){
    if (x == 7){
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