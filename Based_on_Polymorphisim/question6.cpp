// 6) Write a program to check whether a number or string is palindrome or not using function
// overloading?
#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
	void pallindrome(int num)
	{
		int temp = num, n, res = 0;
		while (temp > 0)
		{
			n = temp % 10;
			res = res * 10 + n;
			temp = temp / 10;
		}
		if (res == num)
		{
			cout << num << " is a pallindrome number." << endl;
		}
		else
		{
			cout << num << " is not a pallindrome number." << endl;
			;
		}
	}
	int pallindrome(string str)
	{
		string s = str;
		for (int i = 0; i < s.length() / 2; i++)
		{
			if (s[i] == s[s.length() - i - 1])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
};
int main()
{
	A a;
	int num;
	cout << "Enter a number:" << endl;
	cin >> num;
	a.pallindrome(num);
	string str;
	cout << "Enter a string:" << endl;
	cin >> str;
	int st = a.pallindrome(str);
	if (st == 1)
	{
		cout << str << " is a pallindrome." << endl;
	}
	else
	{
		cout << str << " is not a pallindrome." << endl;
	}
	return 0;
}
