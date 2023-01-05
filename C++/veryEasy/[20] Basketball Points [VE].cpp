/*
####  Basketball Points  ####

You are counting points for a basketball game, given the amount of 3-pointers scored and 2-pointers scored,
find the final points for the team and return that value (2 -pointers scored, 3-pointers scored).


[Examples]

___
points(1, 1) ➞ 5

points(7, 5) ➞ 29

points(38, 8) ➞ 100
_____



[Notes]

___
*) If you get stuck on a challenge, find help in the Resources tab.
*) If you're really stuck, unlock solutions in the Solutions tab.
___



[language_fundamentals] [math] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
Operators
https://www.w3schools.com/cpp/cpp_operators.asp
Are used to perform operations on variables and values. In the example below, we use the + operator to add together.
_________

*/
//Your code should go here:

#include <iostream>
using std::cout;
using std::endl;

int pointers2n3(int pointers2, int pointers3);

int main(){
    cout << pointers2n3(1, 1) << endl;
    cout << pointers2n3(7, 5) << endl;
    cout << pointers2n3(38, 8) << endl;
    return 0;
}

int pointers2n3(int pointers2, int pointers3){
    return pointers2*2 + pointers3*3;
}

// The program is complete.