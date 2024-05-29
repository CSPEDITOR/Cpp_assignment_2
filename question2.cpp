// Write a program to give information about any number such as whether it is even odd, prime or
// not prime, or positive or negative, palindrome or not using class and object?
#include <iostream>
#include <iostream>
using namespace std;
class Prog
{
public:
    int num;
    void positiveornot(int a)
    {
        num = a;
        if (num >= 0)
        {
            cout << num << " is a positive number." << endl;
        }
        else
        {
            cout << num << " is a negative number." << endl;
        }
    }
    void evenornot(int a)
    {
        num = a;
        if (num % 2 == 0)
        {
            cout << num << " is an even number." << endl;
        }
        else
        {
            cout << num << " is an odd number." << endl;
        }
    }
    void primeornot(int a)
    {
        int i;
        num = a;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (num == i)
        {
            cout << num << " is a prime number." << endl;
        }
        else
        {
            cout << num << " is not a prime number." << endl;
        }
    }
    void palindromeornot(int a)
    {
        num = a;
        int temp = num, n, res = 0;
        while (temp > 0)
        {
            n = temp % 10;
            res = res * 10 + n;
            temp = temp / 10;
        }
        if (res == num)
        {
            cout << num << " is a palindrome number." << endl;
        }
        else
        {
            cout << num << " is not a palindrome number." << endl;
        }
    }
};
int main()
{
    int no;
    cout << "Enter a number:";
    cin >> no;
    Prog numb;
    numb.positiveornot(no);
    numb.evenornot(no);
    numb.primeornot(no);
    numb.palindromeornot(no);
    return 0;
}
