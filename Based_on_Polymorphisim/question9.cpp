// 9) Write a program to find area and perimeter of 3 boxes in which dimension of box is known to user
// and the 2nd box is 3/4th of 1st box and third box is the addition of 1st and 2nd box using operator
// overloading?

#include <iostream>
using namespace std;
class Box
{
public:
    float ln, br;
    Box(float a = 0, float b = 0)
    {
        ln = a;
        br = b;
    }
    void area()
    {
        float ar = ln * br;
        cout << "Area of the box is:" << ar << endl;
    }
    void perimeter()
    {
        float pr = 2 * (ln + br);
        cout << "Perimeter of the box is:" << pr << endl;
    }
    Box operator+(Box &o)
    {
        Box t;
        t.ln = ln + o.ln;
        t.br = br + o.br;
        return t;
    }
};
int main()
{
    float a, b;
    cout << "Enter length and breadth of the box1:" << endl;
    cin >> a >> b;
    cout << "Box1..................." << endl;
    Box b1(a, b);
    b1.area();
    b1.perimeter();
    cout << "Box2..................." << endl;
    float d = a * 3 / 4.0;
    float e = b * 3 / 4.0;
    Box b2(d, e);
    b2.area();
    b2.perimeter();
    cout << "Box3..................." << endl;
    Box b3 = b1 + b2;
    b3.area();
    b3.perimeter();
    return 0;
}
