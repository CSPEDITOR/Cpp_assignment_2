// 4) Write a program to find area and perimeter of square using class and object?
#include <iostream>
using namespace std;
class Square
{
public:
	int side;
	int area(int a)
	{
		side = a;
		int ar = side * side;
		return ar;
	}
	int perimeter(int a)
	{
		side = a;
		int pr = 4 * side;
		return pr;
	}
};
int main()
{
	int s;
	cout << "Enter side of the square:" << endl;
	cin >> s;
	Square sq;
	int a = sq.area(s);
	cout << "Area of the square having side:" << s << " is:" << a << " square units." << endl;
	int p = sq.perimeter(s);
	cout << "Perimeter of the square having side:" << s << " is:" << p << " units." << endl;
	return 0;
}
