/*
####  Find the Perimeter of a Rectangle  ####

Create a function that takes length and width and finds the perimeter of a rectangle.


[Examples]

___
findPerimeter(6, 7) ➞ 26

findPerimeter(20, 10) ➞ 60

findPerimeter(2, 9) ➞ 22
_____



[Notes]

___
*) Don't forget to return the result.
*) If you're stuck, find help in the Resources tab.
*) If you're really stuck, find solutions in the Solutions tab.
___



[geometry] [language_fundamentals] [math] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
How to Find the Perimeter of a Rectangle
https://www.varsitytutors.com/basic_geometry-help/how-to-find-the-perimeter-of-a-rectangle
The perimeter of a rectangle is found by adding up the length of all four sides. Since the two long sides are 12 cm, and the two shorter sides are 7 cm the perimeter ca …
_________
_________
Perimeter of a Rectangle Formula
https://byjus.com/maths/perimeter-of-rectangle/
The perimeter of a rectangle is defined as the sum of all the sides of a rectangle. For any polygon, the perimeter formulas are the total distance around its sides. In …
_________
_________
Rectangle
https://en.wikipedia.org/wiki/Rectangle
A quadrilateral with four right angles. It can also be defined as an equiangular quadrilateral, since equiangular means that all of its angles are equal (360°/4 = 90°). …
_________

*/
//Your code should go here:

#include <iostream>
using std::cout;
using std::endl;

int rectPerimeter(float width, float length);

int main(){
    rectPerimeter(6, 7);
    rectPerimeter(20, 10);
    rectPerimeter(2, 9);
    rectPerimeter(0, 21);
    rectPerimeter(-1, 100);
    return 0;
}

int rectPerimeter (float width, float length){
    if (width > 0 && length > 0){
        cout << ((width * 2) + (length * 2)) << endl;
        return 0;
    }
    else if (width == 0 || length == 0){
        cout << "If a triangle exists, it sides cannot be zero but close to zero." << endl;
        return 0;
    }
    else if (width < 0 || length < 0){
        cout << "Measurements of a physical object cannot be negative." << endl;
        return 0;
    }
    return 0;
    
}

// The program is complete.