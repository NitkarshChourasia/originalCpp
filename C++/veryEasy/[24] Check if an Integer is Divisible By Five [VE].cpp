/*
####  Check if an Integer is Divisible By Five  ####

Create a function that returns true if an integer is evenly divisible by 5, and false otherwise.


[Examples]

___
divisibleByFive(5) ➞ true

divisibleByFive(-55) ➞ true

divisibleByFive(37) ➞ false
_____



[Notes]

___
*) Don't forget to return the result.
*) If you get stuck on a challenge, find help in the Resources tab.
*) If you're really stuck, unlock solutions in the Solutions tab.
___



[math] [numbers] [validation]



-------------------------------------------------------------------
[Resources]
_________
Check if a Number is Divisible By Second Number
https://www.sanfoundry.com/cpp-program-check-if-first-divisible-by-second/
Here is source code of the C++ program which checks if a number is divisible by second number. The C++ program is successfully compiled and run on a Linux system. The p …
_________
_________
C++ Arithmetic Operators
http://www.informit.com/articles/article.aspx?p=352857&seqNum=4
Perhaps you have warm memories of doing arithmetic drills in grade school. You can give that same pleasure to your computer. C++ uses operators to do arithmetic. It pro …
_________

*/
// Your code should go here:

#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;

int evenDivBy5(int x);

int main()
{
    evenDivBy5(5);
    evenDivBy5(-55);
    evenDivBy5(37);
    evenDivBy5(132);
    evenDivBy5(1);
    evenDivBy5(0);
    evenDivBy5(0);
    return 0;
}

int evenDivBy5(int x)
{
    if (x % 5 == 0)
    {
        cout << boolalpha << true << endl;
        return 0;
        ;
    }
    else
    {
        cout << boolalpha << false << endl;
        return 0;
    }
    return 0;
}