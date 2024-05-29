// 2. WAP to find area, volume and weight of a box using multilevel inheritance?

#include <iostream>
using namespace std;
class Box1
{
public:
    int ln, br;
    Box1(int a, int b)
    {
        ln = a, br = b;
    }
    int area()
    {
        int ar = ln * br;
        return ar;
    }
};
class Box2 : public Box1
{
public:
    int ht;
    Box2(int a, int b, int c) : Box1(a, b)
    {
        ht = c;
    }
    int volume()
    {
        int ar = area();
        int v = ar * ht;
        return v;
    }
};
class Box3 : public Box2
{
public:
    int wpv;
    Box3(int a, int b, int c, int d) : Box2(a, b, c)
    {
        wpv = d;
    }
    int weight()
    {
        int v = volume();
        int w = wpv * v;
        return w;
    }
};
int main()
{
    int a, b, c, d;
    cout << "Enter length,breadth and height of the box:" << endl;
    cin >> a >> b >> c;
    cout << "Enter weight per volume of the box:" << endl;
    cin >> d;
    Box3 b1(a, b, c, d);
    int ar = b1.area();
    int v = b1.volume();
    int w = b1.weight();
    cout << "Area,Volume and weight of the box is:" << ar << "," << v << " and " << w << " respectively" << endl;
    return 0;
}
