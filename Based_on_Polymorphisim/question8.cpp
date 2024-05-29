// 8) Write a program to add two complex numbers using operator overloading?
#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
public:
    int a, b;
    Complex(int rp = 0, int ip = 0)
    {
        a = rp, b = ip;
    }
    void sum()
    {
        if (b >= 0)
        {
            cout << "The complex number is:" << a << "+" << b << "i" << endl;
        }
        else
        {
            cout << "The complex number is:" << a << "-" << abs(b) << "i" << endl;
        }
    }
    Complex operator+(Complex &o)
    {
        Complex t;
        t.a = a + o.a;
        t.b = b + o.b;
        return t;
    }
};
int main()
{
    int rp1, ip1;
    cout << "Enter real and imaginary part of 1st number:" << endl;
    cin >> rp1 >> ip1;
    Complex n1(rp1, ip1);
    n1.sum();
    int rp2, ip2;
    cout << "Enter real and imaginary part of 2nd number:" << endl;
    cin >> rp2 >> ip2;
    Complex n2(rp2, ip2);
    n2.sum();
    Complex n3 = n1 + n2;
    cout << "After addition:";
    n3.sum();
    return 0;
}
