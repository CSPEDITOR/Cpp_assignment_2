// 4) Write a program to calculate interest that may be simple or compound using function overloading?
#include <iostream>
#include <math.h>
using namespace std;
class Calc
{
public:
    int p, t, n;
    float r;
    void interest(int p, int t, float r)
    {
        float si = (float)(p * t * r) / 100.0;
        cout << "Simple interest=" << si << endl;
    }
    void interest(int p, int t, float r, int n)
    {
        float a = p * (pow(1 + (r / n), (n * t)));
        float ci = a - p;
        cout << "Compound interest=" << ci << endl;
    }
};
int main()
{
    int p, t, n;
    float r;
    cout << "Enter principal amount,rate of interest,time:" << endl;
    cin >> p >> r >> t;
    cout << "Enter the number of times interest is compounded per year:" << endl;
    cin >> n;
    Calc a;
    a.interest(p, t, r);
    a.interest(p, t, r, n);
    return 0;
}
