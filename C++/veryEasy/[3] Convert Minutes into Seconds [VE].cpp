/*
####  Convert Minutes into Seconds  ####

Write a function that takes an integer minutes and converts it to seconds.


[Examples]

___
convert(5) ➞ 300

convert(3) ➞ 180

convert(2) ➞ 120
_____



[Notes]

___
*) Don't forget to return the result.
*) If you get stuck on a challenge, find help in the Resources tab.
*) If you're really stuck, unlock solutions in the Solutions tab.
___



[language_fundamentals] [math] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
Conversion of Minutes into Seconds
https://www.math-only-math.com/conversion-of-minutes-into-seconds.html
We know 1 minute is equal to 60 seconds, which is required to convert the measuring time from minutes to seconds.
_________
_________
Minutes to Seconds Conversion
https://www.timecalculator.net/minutes-to-seconds
Minutes to seconds conversion calculator helps you to find how many seconds in a minute, converts the unit of time minutes to seconds.
_________

*/
//Your code should go here:
#include <iostream>
using namespace std;
int minToSec(int min);

int main()
{
    minToSec(5);
    minToSec(3);
    minToSec(2);
    return 0;
}

int minToSec(int min)
{
    cout << min*60 << "\n";
    return 0;
}

// The program is complete.