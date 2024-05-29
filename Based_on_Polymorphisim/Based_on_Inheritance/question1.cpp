// 1. WAP to find area and volume of a TV using simple inheritance?
#include <iostream>
using namespace std;
class TV
{
public:
    int ln, br;
    TV(int a, int b)
    {
        ln = a, br = b;
    }
    void area()
    {
        int v = ln * br;
        cout << "Area of the TV is " << v << " square units." << endl;
    }
};
class T : public TV
{
public:
    int ht;
    T(int a, int b, int c) : TV(a, b)
    {
        ht = c;
    }
    void volume()
    {
        int v = ln * br * ht;
        cout << "Volume of the TV is " << v << " cubic units." << endl;
    }
};
int main()
{
    int a, b, c;
    cout << "Enter length,breadth and height of the TV:" << endl;
    cin >> a >> b >> c;
    T d(a, b, c);
    d.area();
    d.volume();
    return 0;
}
