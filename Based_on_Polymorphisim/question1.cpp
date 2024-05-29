// 1) Write a program to find area and perimeter of circle,square,rectangle and triangle using function
// overloading?

#include <iostream>
#include <math.h>
using namespace std;
class Box
{
public:
    void area(float r)
    {
        float ar = (3.14) * r * r;
        cout << "Area of the circle is:" << ar << " square units." << endl;
    }
    void area(int s)
    {
        int ar = s * s;
        cout << "Area of the square is:" << ar << " square units." << endl;
    }
    void area(int ln, int br)
    {
        int ar = ln * br;
        cout << "Area of the rectangle is:" << ar << " square units." << endl;
    }
    void area(int s1, int s2, int s3)
    {
        int s = (s1 + s2 + s3) / 2;
        int ar = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        cout << "Area of the triangle is:" << ar << " square units." << endl;
    }
    void perimeter(float r)
    {
        float pr = 2 * (3.14) * r;
        cout << "Perimeter of the circle is:" << pr << " units." << endl;
    }
    void perimeter(int s)
    {
        int pr = 4 * s;
        cout << "Perimeter of the square is:" << pr << " units." << endl;
    }
    void perimeter(int ln, int br)
    {
        int pr = 2 * (ln + br);
        cout << "Perimeter of the rectangle is:" << pr << " units." << endl;
    }
    void perimeter(int s1, int s2, int s3)
    {
        int pr = s1 + s2 + s3;
        cout << "Perimeter of the triangle is:" << pr << " units." << endl;
    }
};
int main()
{
    Box crl;
    float rad;
    cout << "Enter radious of the circle:" << endl;
    cin >> rad;
    crl.area(rad);
    crl.perimeter(rad);
    cout << '\n';
    Box sqr;
    int side;
    cout << "Enter side of the square:" << endl;
    cin >> side;
    sqr.area(side);
    sqr.perimeter(side);
    cout << '\n';
    Box rtnl;
    int l, bd;
    cout << "Enter length and breadth of the rectangle:" << endl;
    cin >> l >> bd;
    rtnl.area(l, bd);
    rtnl.perimeter(l, bd);
    cout << '\n';
    Box trnl;
    int a, b, c;
    cout << "Enter three sides of the triangle:" << endl;
    cin >> a >> b >> c;
    trnl.area(a, b, c);
    trnl.perimeter(a, b, c);
    cout << '\n';
    return 0;
}
