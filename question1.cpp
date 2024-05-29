// 1) Write a program to create simple calculator for addition, subtraction, division, multiplication,
// modulus, factorial, gcd, lcm, power, square root, cube root using class and object?
#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
public:
    void add(int a, int b)
    {
        int sum = a + b;
        cout << "Addition=" << sum << endl;
    }
    void sub(int a, int b)
    {
        int s = a - b;
        cout << "Subtraction=" << s << endl;
    }
    void mult(int a, int b)
    {
        int m = a * b;
        cout << "Multiplication=" << m << endl;
    }
    void div(int a, int b)
    {
        int d = a / b;
        cout << "Division=" << d << endl;
    }
    void mod(int a, int b)
    {
        int r = a % b;
        cout << "Remainder=" << r << endl;
    }
    /*int gcd(int a,int b)
    {
        int l=a<b?b:a;
        for(int i=l;i>=1;i--)
        {
            if(a%i==0&&b%i==0)
            {
                return i;
                break;
            }
        }
    }
    int lcm(int a,int b)
    {
        int l=a<b?b:a;
        for(int i=l;i<=a*b;i++){
            if(i%a==0&&i%b==0)
            {
                return i;
                break;
            }
        }
    }*/
    void power(int a, int b)
    {
        int p = pow(a, b);
        cout << a << " to the power " << b << " is:" << p << endl;
    }
    void squareRoot(int a)
    {
        int sr = sqrt(a);
        cout << "Square root of " << a << " is:" << sr << endl;
    }
    void cubicRoot(int a)
    {
        int cr = cbrt(a);
        cout << "Cube root of " << a << " is:" << cr << endl;
    }
    int fact(int a)
    {
        if (a == 1)
        {
            return 1;
        }
        else
        {
            return a * fact(a - 1);
        }
    }
};
int main()
{
    cout << "Hello!!!,i am a digital calculator...." << endl;
    cout << "I have following features...." << endl;
    Calculator calc;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cout << "5.Modulus division" << endl;
    cout << "6.Greatest common divisor(GCD)" << endl;
    cout << "7.Least common Multiplier(LCM)" << endl;
    cout << "8.Power" << endl;
    cout << "9.Square root" << endl;
    cout << "10.Cubic root" << endl;
    cout << "11.Factorial" << endl;
    cout << "==============================================" << endl;
    int c;
    string str;
    cout << "Do you want to explore?(Yes/No)" << endl;
    cin >> str;
    while (str == "Yes" || str == "yes")
    {
        cout << "Do you want to continue?(Yes/No)" << endl;
        cin >> str;
        if (str == "Yes" || str == "yes")
        {
            cout << "Enter your choice:";
            cin >> c;
            switch (c)
            {
            case 1:
                cout << "Enter two numbers:";
                int a, b;
                cin >> a >> b;
                calc.add(a, b);
                cout << "=====================" << endl;
                break;
            case 2:
                cout << "Enter two numbers:";
                int d, e;
                cin >> d >> e;
                calc.sub(d, e);
                cout << "=====================" << endl;
                break;
            case 3:
                cout << "Enter two numbers:";
                int f, g;
                cin >> f >> g;
                calc.mult(f, g);
                cout << "=====================" << endl;
                break;
            case 4:
                cout << "Enter two numbers:";
                int h, i;
                cin >> h >> i;
                calc.div(h, i);
                cout << "=====================" << endl;
                break;
            case 5:
                cout << "Enter two numbers:";
                int j, k;
                cin >> j >> k;
                calc.mod(j, k);
                cout << "=====================" << endl;
                break;
            /*case 6:
            cout<<"Enter two numbers:";
            int l,z;
            cin>>l>>z;
            int hc=calc.gcd(l,z);
            cout<<"GCD of "<<l<<" and "<<z<<" is:"<<hc<<endl;
            cout<<"====================="<<endl;
            break;
            case 7:
            cout<<"Enter two numbers:";
            int n,o;
            cin>>n>>o;
            int lc=calc.lcm(n,o);
            cout<<"LCM of "<<n<<" and "<<o<<" is:"<<lc<<endl;
            cout<<"====================="<<endl;
            break;*/
            case 8:
                cout << "Enter two numbers:";
                int p, w;
                cin >> p >> w;
                calc.power(p, w);
                cout << "=====================" << endl;
                break;
            case 9:
                cout << "Enter a number:";
                int q;
                cin >> q;
                calc.squareRoot(q);
                cout << "=====================" << endl;
                break;
            case 10:
                cout << "Enter a number:";
                int x;
                cin >> x;
                calc.cubicRoot(x);
                cout << "=====================" << endl;
                break;
            case 11:
                cout << "Enter a number:";
                int y;
                cin >> y;
                int fac = calc.fact(y);
                cout << "Factorial of " << y << " is:" << fac << endl;
                cout << "=====================" << endl;
                break;

                /*default:
                    cout<<"Enter a valid choice.."<<endl;*/
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
