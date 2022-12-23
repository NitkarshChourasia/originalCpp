#include <iostream>
#include <cmath>
using namespace std;

int add(int int1, int int2);
int sqrt(int int1);
int substract(int int1, int int2);
int multiply(int int1, int int2);
int divide(int int1, int int2);

int main()
{
    cout << add(100, 100) << endl;
    cout << substract(100, 50) << endl;
    cout << multiply(100, 100) << endl;
    cout << divide(100, 50) << endl;
    cout <<sqrt(100) << endl;
}

int add(int int1, int int2)
{
    return int1 + int2;
}

int substract(int int1, int int2)
{
    cout << int1 - int2 << endl;
    return int2 - int1;
}

int divide(int int1, int int2)
{
    cout << int1 / int2 << endl;
    return int2 / int1;
}

int multiply(int int1, int int2)
{
    return int1 * int2;
}
int sqrt(int int1)
{
    return sqrt(int1);
}