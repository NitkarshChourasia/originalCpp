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
using std::cout;
using std::endl;
using std::boolalpha;

int isEqual(int x, int y);

int main(){
    isEqual(9 , 9);
    isEqual(10, 11);
    isEqual(30, 21);
    isEqual(1333, 21);
    isEqual(13, 31);
    isEqual(10, 10);
    return 0;
}

int isEqual(int x, int y){
    if (x == y){
        cout << boolalpha <<  true << endl;
        return 0;
    }
    else{
        cout << boolalpha <<  false << endl;
        return 0;
    }
    return 0;
}

// The program is complete.