// 8) Write a program to search for a user defined number in array of 20 numbers using linear search
// and binary search using class and object? Allow user to choose searching method.
#include <iostream>
#include <algorithm>
using namespace std;

class ArraySearch
{
private:
	int arr[20];
	int num;

public:
	int choice;
	void getUserInput()
	{
		cout << "Enter 20 elements for the array:\n";
		for (int i = 0; i < 20; i++)
		{
			cin >> arr[i];
		}
		cout << "Enter the number to search: ";
		cin >> num;
		cout << "Choose search method:\n1. Linear Search\n2. Binary Search\nEnter your choice (1 or 2): ";
		cin >> choice;
	}

	void linearSearch()
	{
		for (int i = 0; i < 20; i++)
		{
			if (arr[i] == num)
			{
				cout << "Number found at index " << i << endl;
				return;
			}
		}
		cout << "Number not found in the array." << endl;
	}

	void binarySearch()
	{
		sort(arr, arr + 20);
		int left = 0, right = 19;
		while (left <= right)
		{
			int mid = left + (right - left) / 2;
			if (arr[mid] == num)
			{
				cout << "Number found at index " << mid << endl;
				return;
			}
			else if (arr[mid] < num)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
		cout << "Number not found in the array." << endl;
	}
};

int main()
{
	ArraySearch obj;
	obj.getUserInput();
	if (obj.choice == 1)
	{
		obj.linearSearch();
	}
	else if (obj.choice == 2)
	{
		obj.binarySearch();
	}
	else
	{
		cout << "Invalid choice." << endl;
	}
	return 0;
}
