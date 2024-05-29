// 7) Write a program to find volume of rectangle and square box using function overloading?
#include <iostream>
#include <math.h>
using namespace std;
class Box
{
public:
    void volume(int s)
    {
        int v = s * s * s;
        cout << "Volume of the square is:" << v << " cubic units." << endl;
    }
    void volume(int ln, int br, int ht)
    {
        int v = ln * br * ht;
        cout << "Volume of the rectangle is:" << v << " cubic units." << endl;
    }
};
int main()
{
    Box sqr;
    int side;
    cout << "Enter side of the square:" << endl;
    cin >> side;
    sqr.volume(side);
    cout << '\n';
    Box rtnl;
    int l, bd, h;
    cout << "Enter length,breadth and height of the rectangle:" << endl;
    cin >> l >> bd >> h;
    rtnl.volume(l, bd, h);
    return 0;
}
