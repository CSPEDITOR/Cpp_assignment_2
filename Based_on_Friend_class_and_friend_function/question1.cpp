// 1. WAP to create a simple calculator for operations such as +, -, *, /,%, factorial of largest among two
// numbers using friend class?
#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
private:
    int num1, num2;

public:
    void setNumbers(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    friend class Operations;
};

class Operations
{
public:
    static int add(Calculator &calc)
    {
        return calc.num1 + calc.num2;
    }

    static int subtract(Calculator &calc)
    {
        return calc.num1 - calc.num2;
    }

    static int multiply(Calculator &calc)
    {
        return calc.num1 * calc.num2;
    }

    static int divide(Calculator &calc)
    {
        if (calc.num2 == 0)
        {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return calc.num1 / calc.num2;
    }

    static int modulo(Calculator &calc)
    {
        if (calc.num2 == 0)
        {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return calc.num1 % calc.num2;
    }

    static int factorial(Calculator &calc)
    {
        int larger = (calc.num1 > calc.num2) ? calc.num1 : calc.num2;
        if (larger < 0)
        {
            cout << "Error: Factorial of a negative number is not defined" << endl;
            return 0;
        }
        int fact = 1;
        for (int i = 1; i <= larger; i++)
        {
            fact *= i;
        }
        return fact;
    }
};

int main()
{
    Calculator calc;
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    calc.setNumbers(num1, num2);

    cout << "Addition: " << Operations::add(calc) << endl;
    cout << "Subtraction: " << Operations::subtract(calc) << endl;
    cout << "Multiplication: " << Operations::multiply(calc) << endl;
    cout << "Division: " << Operations::divide(calc) << endl;
    cout << "Modulo: " << Operations::modulo(calc) << endl;
    cout << "Factorial of the larger number: " << Operations::factorial(calc) << endl;

    return 0;
}
