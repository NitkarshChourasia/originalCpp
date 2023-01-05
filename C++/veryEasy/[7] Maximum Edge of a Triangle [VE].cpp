/*
####  Maximum Edge of a Triangle  ####

Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.


[Examples]

___
nextEdge(8, 10) ➞ 17

nextEdge(5, 7) ➞ 11

nextEdge(9, 2) ➞ 10
_____



[Notes]

___
*) (side1 + side2) - 1 = maximum range of third edge.
*) The side lengths of the triangle are positive integers.
*) Don't forget to return the result.
___



[algorithms] [math] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
Pythagorean Theorem
http://mathworld.wolfram.com/PythagoreanTheorem.html
Many different proofs exist for this most fundamental of all geometric theorems. The theorem can also be generalized from a plane triangle to a trirectangular tetrahedr …
_________
_________
sqrt() Function
https://www.programiz.com/cpp-programming/library-function/cmath/sqrt
Returns the square root of a number.
_________
_________
Minimum and Maximum Possible Length of the Third Side of a Triangle
https://www.geeksforgeeks.org/minimum-and-maximum-possible-length-of-the-third-side-of-a-triangle/
Given two sides of a triangle s1 and s2, the task is to find the minimum and maximum possible length of the third side of the given triangle. Print -1 if it is not poss …
_________
_________
How many ways are there to prove the Pythagorean theorem?
https://youtu.be/YompsDlEdtc
What do Euclid, 12-year-old Einstein, and American President James Garfield have in common? They all came up with elegant proofs for the famous Pythagorean theorem, one …
_________

*/
//Your code should go here:

#include <iostream>
using std::cout;
using std::endl;

int nextEdge(float side1, float side2); 

int main(){
    nextEdge(8, 10);
    nextEdge(5, 7);
    nextEdge(9, 2);
    nextEdge(13, -1);
    nextEdge(-1, -2);
    return 0;
}

int nextEdge(float side1, float side2){
    if (side1 >= 0 && side2 >= 0){
        cout << (side1 + side2 - 1) << endl;
        return 0;
    }
    else{
        cout << "Length of sides cannot be negative." << endl;
        return 0;
    }
}

// The program is complete.