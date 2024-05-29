#include <iostream>
using namespace std;

class Box
{
private:
    int ln, br, ht;

public:
    Box() : ln(0), br(0), ht(0) {} // Default constructor

    Box(int a, int b, int c) : ln(a), br(b), ht(c) {}

    Box operator+(const Box &o)
    {
        Box t;
        t.ln = ln + o.ln;
        t.br = br + o.br;
        t.ht = ht + o.ht;
        return t;
    }

    friend void volume(const Box &b);
};

void volume(const Box &b)
{
    int v = b.ln * b.br * b.ht;
    cout << "Volume of the box is: " << v << endl;
}

int main()
{
    cout << "Box1..................." << endl;
    int a, b, c;
    cout << "Enter length, breadth and height of the box1:" << endl;
    cin >> a >> b >> c;
    Box b1(a, b, c);
    volume(b1);

    cout << "Box2..................." << endl;
    int d, e, f;
    cout << "Enter length, breadth and height of the box2:" << endl;
    cin >> d >> e >> f;
    Box b2(d, e, f);
    volume(b2);

    cout << "Box3..................." << endl;
    Box b3 = b1 + b2;
    volume(b3);

    return 0;
}
