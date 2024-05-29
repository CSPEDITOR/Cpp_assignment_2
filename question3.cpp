// 3) Write a program to find area and perimeter of rectangle using class and object?
#include<iostream>
using namespace std;
class Rectangle{
	public:
		int ln,br;
		int area(int a,int b)
		{
			ln=a,br=b;
			int ar=ln*br;
			return ar;	
		}
		int perimeter(int a,int b)
		{
			ln=a,br=b;
			int pr=2*(ln+br);
			return pr;
		}
};
int main()
{
	int l,b;
	cout<<"Enter length and breadth of the rectangle:"<<endl;
	cin>>l>>b;
	Rectangle r;
	int a=r.area(l,b);
	cout<<"Area of the rectanhgle having length:"<<l<<" and breadth:"<<b<<" is:"<<a<<" square units."<<endl;
	int p=r.perimeter(l,b);
	cout<<"Perimeter of the rectanhgle having length:"<<l<<" and breadth:"<<b<<" is:"<<p<<" units."<<endl;
	return 0;
}
