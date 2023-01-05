/*
####  Basic Variable Assignment  ####

A student learning C++ was trying to make a function. His code should concatenate a passed string name
with string "Sage" and store it in a variable called result. He needs your help to fix this code.


[Examples]

___
nameString("Nitkarsh") ➞ "NitkarshSage"

nameString("Matt") ➞ "MattSage"

nameString("C++") ➞ "C++Sage"
_____



[Notes]

___
*) Don't forget to return the result.
*) If you get stuck on a challenge, find help in the Resources tab.
*) If you're really stuck, unlock solutions in the Solutions tab.
___



[bugs] [functional_programming] [language_fundamentals] [strings]



-------------------------------------------------------------------
[Resources]
_________
String Concatenation
https://www.w3schools.com/cpp/cpp_strings_concat.asp
The + operator can be used between strings to add them together to make a new string. This is called concatenation.
_________
_________
Assignment Operators (=)
https://www.w3schools.com/cpp/cpp_operators_assignment.asp
Used to assign values to variables. In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x.
_________
_________
Variables
https://www.w3schools.com/cpp/cpp_variables.asp
Variables are containers for storing data values.
_________

*/
// Your code should go here:

#include <iostream>
using std::cout;
using std::endl;
using std::string;

string nameString(string name);

int main()
{
    cout << nameString("Nitkarsh") << endl;
    cout << nameString("Matt") << endl;
    cout << nameString("C++") << endl;
}

string nameString(string name)
{
    string result = name + "Sage";
    return result;
}
