#include <iostream>
using namespace std;

int add(int a = 9, int b = 9)
{
    return a + b;
}
int substract(int a = 9, int b = 6)
{
    return a - b;
}
int multiply(int a = 6, int b = 6)
{
    return a * b;
}
int divide(int a = 9, int b = 3)
{
    return a / b;
}
int exponent(int a = 9, int b = 2)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
int yourName(string name = "Anmol")
{
    cout << "Hello" << name << "!" << endl;
    return 0; // Return 0 search for it, how to make it.
}
string exit(string continue1)
{
    switch (continue1)
    {
    case "exit":
    case "exit()":
    case "quit":
    case "quit()":
    case "shutdown":
    case "shutdown()":
    case "close":
    case "close()":
    case "end":
    case "end()":
    case "stop":
    case "stop()":
    case "terminate":
    case "terminate()":
    case "kill":
    case "kill()":
    case "die":
    case "die()":
    case "bye":
    case "bye()":
    case "goodbye":
    case "goodbye()":
    case "good bye":
    case "good bye()":
    case "good-bye":
    case "good-bye()":
    case "goodbye()":
        break;
    case "multiply":
    case "multiply()":
    case "times":
    case "times()":
    case "x":
    case "x()":
    case "X":
    case "X()":
    case "*":
    case "*()":
        cout << "Please enter the multiples: ";
        cin << a << b;
        multiply(a, b);
        break;
    case "divide":
    case "divide()":
    case "/":
    case "/()":
    case "÷":
    case "÷()":
        cout << "Please enter the divisors: ";
        cin << a << b;
        divide(a, b);
        break;
    case "exponent":
    case "exponent()":
    case "power":
    case "power()":
    case "^":
    case "^()":
    case "raise":
    case "raise()":
    case "to the power of":
    case "to the power of()":
    case "to the power":
    case "to the power()":
    case "to the":
    case "to the()":
    case "to":
    case "to()":
    case "raise to the power of":
    case "raise to the power of()":
    case "raise to the power":
    case "raise to the power()":
    case "raise to the":
    case "raise to the()":
    case "raise to":
        cout << "Please enter the base and the exponent: ";
        cin << a << b;
        exponent(a, b);
        break;
    case "add":
    case "add()":
    case "+":
    case "+()":
    case "plus":
    case "plus()":
    case "sum":
    case "sum()":
    case "addition":
    case "addition()":
    case "add up":
    case "add up()":
    case "addition up":
    case "addition up()":
    case "sum up":
    case "sum up()":
    case "sum up":
    case "sum up()":
        cout << "Please enter the numbers to add: ";
        cin << a << b;
        add(a, b);
        break;
    case "subtract":
    case "subtract()":
    case "-":
    case "-()":
    case "minus":
    case "minus()":
    case "difference":
    case "difference()":
    case "subtraction":
    case "subtraction()":
    case "substract":
    case "substract()":
    case "subtraction":
    case "subtraction()":
        cout << "Please enter the numbers to subtract: ";
        cin << a << b;
        substract(a, b);
        break;
    case "cotinue":
    case "cotinue()":
    case "continue":
    case "continue()":
    case "keep going":
    case "keep going()":
    case "keep on going":
    case "keep on going()":
    case "keep on":
    case "keep on()":
    case "keep":
    case "keep()":
    case "go on":
    case "go on()":
    case "go":
    case "go()":
    case "continue on":
    case "continue on()":
    case "start":
    case "start()":
    case "start again":
    case "start again()":
    case "restart":
    case "restart()":
    case "restart again":
    case "again":
    case "again()":
        continue;
    }
}

int main()
{
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    yourName(name);
    while (true)
    {
        string continue1;
        cout << "Please enter the operation you want to perform: ";
        cin >> continue1;
        exit(continue1);
    }
}