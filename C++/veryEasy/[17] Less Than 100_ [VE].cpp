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
using std::cout;
using std::endl;
using std::boolalpha;

int lessThan100(float fnum1, float fnum2);

int main(){
    lessThan100(22, 22);
    lessThan100(42, 42);
    lessThan100(22, 42);
    lessThan100(22, 62);
    lessThan100(100, 0);
    lessThan100(10, 91);
    lessThan100(100, 1);
    return 0;
}

int lessThan100(float fnum1, float fnum2){
    if ((fnum1 + fnum2) < 100){
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