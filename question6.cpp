// 6) Write a program to display type of triangle using sides of triangle?
#include <iostream>
using namespace std;
class Triangle
{
public:
	int a, b, c;
	void types(int e, int f, int g)
	{
		a = e, b = f, c = g;
		if (a == b && a == c)
		{
			cout << "This is an Equilateral triangle" << endl;
		}
		else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
		{
			cout << "This is an Isosceles triangle" << endl;
		}
		else
		{
			cout << "This is a scalene triangle" << endl;
		}
	}
};
int main()
{
	int s1, s2, s3;
	cout << "Enter three sides of a triangle:" << endl;
	cin >> s1 >> s2 >> s3;
	Triangle t;
	t.types(s1, s2, s3);
	return 0;
}
