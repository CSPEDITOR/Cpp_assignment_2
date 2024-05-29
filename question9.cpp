// 9) Write a program to implement stack and perform following using class and object?
// a) create an stack of size 10 using array
// b) insert 10 elements into stack using push and isfull method
// c) find factorial of difference between largest and smallest
// element of stack
// d) search any user defined element in stack using peak method
// e) delete 3 elements from stack using pop and isempty method
// f) display remaining element of stack

#include <iostream>
using namespace std;

class Stack
{
private:
	int arr[10];
	int top;

public:
	Stack()
	{
		top = -1;
	}

	bool isEmpty()
	{
		return top == -1;
	}

	bool isFull()
	{
		return top == 9;
	}

	void push(int element)
	{
		if (isFull())
		{
			cout << "Error: Stack is full" << endl;
			return;
		}
		arr[++top] = element;
	}

	int pop()
	{
		if (isEmpty())
		{
			cout << "Error: Stack is empty" << endl;
			return -1;
		}
		return arr[top--];
	}

	int peek(int c)
	{
		if (isEmpty())
		{
			cout << "Error: Stack is empty" << endl;
			return -1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] == c)
			{
				return i;
			}
		};
	}

	void display()
	{
		if (isEmpty())
		{
			cout << "Stack is empty" << endl;
			return;
		}
		cout << "Stack elements: ";
		for (int i = top; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	int fact(int a)
	{
		if (a == 1)
		{
			return 1;
		}
		else
		{
			return a * fact(a - 1);
		}
	}
};

int main()
{
	Stack stack;
	int arr[10];
	// Insert 10 elements into the stack using push
	cout << "Enter 10 elements to the array:";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		stack.push(arr[i]);
	}

	// Display the stack
	stack.display();
	// to find factorial difference of largest and smallest numbers of the stack
	int lg = 0, sm = 10;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > lg)
		{
			lg = arr[i];
		}
		if (arr[i] < sm)
		{
			sm = arr[i];
		}
	}
	int diff = lg - sm;
	int fcd = stack.fact(diff);
	cout << "Factorial of diffrence of largest and smallest numbers of the stack is:" << fcd << endl;
	// Search for a user-defined element using peek
	int searchElement;
	cout << "Enter the element to search: ";
	cin >> searchElement;
	int index = stack.peek(searchElement);
	if (index != -1)
	{
		cout << "Element found at index: " << index << endl;
	}

	// Delete 3 elements from the stack using pop
	cout << "Deleting 3 elements from the stack..." << endl;
	for (int i = 0; i < 3; i++)
	{
		stack.pop();
	}

	// Display the remaining elements of the stack
	stack.display();

	return 0;
}
