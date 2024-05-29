// 4. Write a program to swap two numbers without using 3rd variable and with using 3rd variable using
// friend function?

#include <iostream>
using namespace std;

class Swap
{
private:
    int a, b;

public:
    void setValues(int x, int y)
    {
        a = x;
        b = y;
        cout << "Before swapping: num1 = " << a << ", num2 = " << b << endl;
    }

    friend void swapNumbers(Swap &);
};

void swapNumbers(Swap &obj)
{
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
    cout << "After swapping: num1 = " << obj.a << ", num2 = " << obj.b << endl;
}

int main()
{
    Swap obj;
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    obj.setValues(num1, num2);

    swapNumbers(obj);

    return 0;
}
