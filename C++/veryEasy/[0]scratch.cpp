#include <iostream>
using namespace std;
int dataTypes();
int main()
{
    int x, y, sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "The sum of x and y is: " << sum << endl;
    cout << endl;
    dataTypes();
    return 0;
}

int dataTypes()
{
    // Creating variables.
    int int1 = 7;
    float float1 = 14.31;
    double double1 = 13.423;
    char char1 = 'D';
    string string1 = "Hello World!";
    bool bool1 = true;
    bool bool2 = false;

    // Printing the variables.
    cout << "Int is: " << int1 << "\n";
    cout << "Float is: " << float1 << "\n";
    cout << "Double is: " << double1 << "\n";
    cout << "Char is: " << char1 << "\n";
    cout << "String is: " << string1 << "\n";
    cout << "Bool #1 is: " << bool1 << "\n";
    cout << "Bool #2 is: " << bool2 << "\n";

}