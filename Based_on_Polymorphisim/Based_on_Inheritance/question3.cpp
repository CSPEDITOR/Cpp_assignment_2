// 3. WAP to find simple and compound interest using simple inheritance?

#include <iostream>
#include <math.h>
using namespace std;
class A
{
public:
    int p, t;
    float r;
    A(int a, int b, float c)
    {
        p = a, t = b, r = c;
    }
    float SI()
    {
        float si = (p * t * r) / 100.0;
        cout << "Simple interest:" << si << endl;
    }
};
class B : public A
{
public:
    int n;
    B(int a, int b, float c, int d) : A(a, b, c)
    {
        n = d;
    }
    float CI()
    {
        float a = p * (pow(1 + (r / n), (n * t)));
        float ci = a - p;
        cout << "compound interest:" << ci << endl;
    }
};
int main()
{
    int p, t;
    float r;
    cout << "Enter principal amout,time and rate of interest:" << endl;
    cin >> p >> t >> r;
    int n;
    cout << "Enter time period for compound interest:" << endl;
    cin >> n;
    B b(p, t, r, n);
    b.SI();
    b.CI();
    return 0;
}
