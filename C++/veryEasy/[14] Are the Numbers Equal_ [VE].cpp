/*
####  Are the Numbers Equal?  ####

Create a function that returns true when num1 is equal to num2; otherwise return false.


[Examples]

___
isSameNum(4, 8) ➞ false

isSameNum(2, 2) ➞  true

isSameNum(2, "2") ➞ false
_____



[Notes]

Don't forget to return the result.


[conditions] [language_fundamentals] [numbers] [validation] 



-------------------------------------------------------------------
[Resources]
_________
Check if Two Numbers Are Equal Without Using Comparison Operators
https://www.geeksforgeeks.org/check-two-numbers-equal-without-using-comparison-operators/
Check if two numbers are equal without using comparison operators.
_________
_________
Check Whether Two Integers Are Equal or Not
https://www.w3resource.com/c-programming-exercises/conditional-statement/c-conditional-statement-exercises-1.php
Check whether two integers are equal or not.
_________

*/
//Your code should go here:

#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;

int equalMethod(float num1, float num2);
int substractMethod(float num1, float num2);
int XORMethod(int num1, int num2);

int main(){
    equalMehod(9, 9);
    equalMehod(0, 9);
    equalMehod(9, "9");

    substractMethod(10, 10);
    substractMethod(19, 10);
    substractMethod(10, "10");

    XORMethod(31,31);
    XORMethod(31,3);
    XORMethod(31,"31");
    return 0;
}

int equalMethod(float num1, float num2){
    if (num1 == num2){
        cout << boolalpha << true << endl;
        return 0;
    }
    else{
        cout << boolalpha << false << endl;
        return 0;
    }
    return 0;
}
int substractMethod(float num1, float num2){
    if (!(num1 - num2)){
        cout << boolalpha << true << endl;
        return 0;
    }
    else{
        cout << boolalpha << false << endl;
        return 0;
    }
    return 0;
}

int XORMethod(int num1, int num2){
    if (num1 ^ num2){
        cout << boolalpha << true << endl;
        return 0;
    }
    else{
        cout << boolalpha << false << endl;
        return 0;
    }
    return 0;
}

