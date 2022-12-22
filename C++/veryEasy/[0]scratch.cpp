#include <iostream>
using namespace std;
void greet()
{
    cout << "Hello world";
}
void numbers(int inum1, float fnum2)
{
    cout << "The int number is " << inum1 << endl;
    cout << "The float number is " << fnum2 << endl;
}
int main()
{
    int n = 7;
    cout << n << endl;
    // Calling the functions:
    numbers(2, 232.131);
    greet();
    return 0;
}
