/*
####  Convert Hours into Seconds  ####

Write a function that converts hours into seconds.


[Examples]

___
howManySeconds(2) ➞ 7200

howManySeconds(10) ➞ 36000

howManySeconds(24) ➞ 86400
_____



[Notes]

___
*) 60 seconds in a minute, 60 minutes in an hour
*) Don't forget to return your answer.
___



[language_fundamentals] [math] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
How many seconds are in an hour?
https://www.rapidtables.com/calc/time/seconds-in-hour.html
One hour has 60 minutes and one minute has 60 seconds.
_________
_________
Conversion of Hours into Seconds
https://www.math-only-math.com/conversion-of-hours-into-seconds.html
We know 1 hour is equal to 3600 seconds, which is required to convert the measuring time from hours to seconds.
_________

*/
//Your code should go here:

#include<iostream>
// #include<math>
using std::cout;
using std::endl;

int hours2Secs(float hours);

int main(){
    hours2Secs(2);
    hours2Secs(10);
    hours2Secs(24);
    return 0;
}

int hours2Secs(float hours){
    cout << (hours * 60 * 60) << endl;
    return 0;
}

// The program is complete.