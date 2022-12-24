/*
####  Divides Evenly  ####

Given two integers, a and b, return true if a can be divided evenly by b. Return false otherwise.


[Examples]

___
dividesEvenly(98, 7) ➞ true
// 98/7 = 14

dividesEvenly(85, 4) ➞ false
// 85/4 = 21.25
_____



[Notes]

a will always be greater than or equal to b.


[math] [numbers] [validation] 



-------------------------------------------------------------------
[Resources]
_________
How to check of given number is divisable by 15?
https://stackoverflow.com/questions/18706587/how-to-check-if-given-number-is-divisible-of-15-in-fastest-way
Division in processor takes much time, so I want to ask how to check in fastest way if number is divisible of some other number, in my case I need to check if number is …
_________
_________
Multiplicative Operators and the Modulus Operator
https://docs.microsoft.com/en-us/cpp/cpp/multiplicative-operators-and-the-modulus-operator?view=vs-2019
The multiplicative operators are: Multiplication (*) Division (/) Modulus (remainder from division) (%) These binary operators have left-to-right associativity. Th …
_________
_________
Operators
https://www.cplusplus.com/doc/tutorial/operators/
Once introduced to variables and constants, we can begin to operate with them by using operators. What follows is a complete list of operators. At this point, it is lik …
_________

*/
//Your code should go here:

#include <iostream>
#include <ios>
using std::boolalpha;
using std::cout;
using std::endl;

int dividesEvenly(int a, int b);

int main()
{
    dividesEvenly(4, 2);
    dividesEvenly(98, 7);
    dividesEvenly(1, 2);
    dividesEvenly(2, 3);
    dividesEvenly(85, 4);
    return 0;
}

int dividesEvenly(int a, int b)
{
    if (a % b == 0)
    {
        cout << boolalpha << true << endl;
        return 0;
    }
    else
    {
        cout << boolalpha << false << endl;
        return 0;
    }
}

// The program is complete.