#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: ";
    cout << "a = " << a;
    cout << "\tb = " << b;
    return;
}

int main()
{
    int a, b;
    cout << "Enter the two numbers to be swapped: ";
    cin >> a >> b;
    cout << "a = " << a;
    cout << "\tb = " << b;

    swap(a, b);
}