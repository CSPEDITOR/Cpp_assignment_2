// 5) Write a program to find area and perimeter of triangle having 3 sides using class and object?
#include <iostream>
#include <math.h>
using namespace std;
class Triangle
{
public:
	int a, b, c;
	int area(int d, int e, int f)
	{
		a = d, b = e, c = f;
		int s = (a + b + c) / 2;
		int ar = sqrt(s * (s - 1) * (s - 2) * (s - 3));
		return ar;
	}
	int perimeter(int d, int e, int f)
	{
		a = d, b = e, c = f;
		int pr = a + b + c;
		return pr;
	}
};
int main()
{
	int s1, s2, s3;
	cout << "Enter three sides of the triangle:" << endl;
	cin >> s1 >> s2 >> s3;
	Triangle t;
	int a = t.area(s1, s2, s3);
	cout << "Area of the triangle having sides " << s1 << "," << s2 << " and " << s3 << " is:" << a << " square units." << endl;
	int p = t.perimeter(s1, s2, s3);
	cout << "Perimeter of the triangle having sides " << s1 << "," << s2 << " and " << s3 << " is:" << p << " units." << endl;
	return 0;
}
