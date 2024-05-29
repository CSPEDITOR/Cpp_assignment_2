// 5) Write a program to overload sum method if arguments are numbers than it will add numbers or
// string than concat two strings using function overloading?

#include<iostream>
using namespace std;
class Ops{
	public:
		int sum(int a,int b)
		{
			return (a+b);
		}
		string sum(string a,string b)
		{
			return (a+b);
		}
};
int main(){
	Ops o;
	cout<<"Enter two integers:"<<endl;
	int a,b;
	cin>>a>>b;
	int c=o.sum(a,b);
	cout<<a<<"+"<<b<<"="<<c<<endl;
	cout<<"Enter two strings(first name and last name):"<<endl;
	string f,l;
	cin>>f>>l;
	string h=o.sum(f,l);
	cout<<"After concatenation my name is: "<<h<<endl;
	return 0;
}
