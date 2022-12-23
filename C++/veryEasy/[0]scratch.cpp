#include <iostream>
using namespace std;
int dataTypes();
int add(int int1, int int2);

int switchCases(int int1);



int main()
{
    switchCases(10);
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

    int add(int int1, int int2)
    {
    int x, y, sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "The sum of x and y is: " << sum << endl;
    cout << endl;
    }

    int switchCases(int int1)
    {
        switch(int1){
            case 1:
                cout << "Monday";
                break;
            case 2:
                cout << "Tuesday";
                break;
            case 3:
                cout << "Wednesday";
                break;
            case 4:
                cout << "Thursday";
                break;
            case 5:
                cout << "Friday";
                break;
            case 6:
                cout << "Saturday";
                break;
            case 7:
                cout << "Sunday";
                break;
            default:
                cout << "Chal, Hath behen ki lodi. Chal hath behen ki lodi";
                break;
        }
        return 0;
    }