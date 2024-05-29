// 10) Write a program to implement queue and perform following using class and object?
// a) create an queue of size 10 using array
// b) insert 10 elements into queue using insert method
// c) replace even numbers available in queue with nearest prime numbers
// d) display number of odd and prime numbers.
// e) delete 3 elements from queue using delete method
// f) display remaining element of queue.


#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class Queue
{
private:
	queue<int> q;

public:
	void push(int element)
	{
		q.push(element);
	}

	void pop()
	{
		if (!q.empty())
		{
			q.pop();
		}
	}

	void display()
	{
		if (q.empty())
		{
			cout << "Queue is empty" << endl;
			return;
		}
		cout << "Queue elements: ";
		queue<int> temp = q;
		while (!temp.empty())
		{
			cout << temp.front() << " ";
			temp.pop();
		}
		cout << endl;
	}

	void replaceEvenWithNearestPrime()
	{
		queue<int> temp;
		while (!q.empty())
		{
			int current = q.front();
			q.pop();
			if (current % 2 == 0)
			{
				int nearestPrime = findNearestPrime(current);
				temp.push(nearestPrime);
			}
			else
			{
				temp.push(current);
			}
		}
		q = temp;
	}
	bool isOdd(int num)
	{
		if (num % 2 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	bool isPrime(int num)
	{
		if (num <= 1)
		{
			return false;
		}
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
		return true;
	}

	int findNearestPrime(int num)
	{
		int smaller = num - 1;
		int larger = num + 1;
		while (true)
		{
			if (isPrime(smaller))
			{
				return smaller;
			}
			else if (isPrime(larger))
			{
				return larger;
			}
			smaller--;
			larger++;
		}
	}
};

int main()
{
	Queue queue;

	// Insert 10 elements into the queue using push
	for (int i = 1; i <= 10; i++)
	{
		queue.push(i);
	}

	// Display the queue
	queue.display();

	// to search total number of odds and primes numbers
	int odd = 0, prime = 0;
	for (int i = 1; i <= 10; i++)
	{
		if (queue.isOdd(i))
		{
			odd++;
		}
		if (queue.isPrime(i))
		{
			prime++;
		}
	}
	cout << "Total number of odds:" << odd << endl;
	cout << "Total number of primes:" << prime << endl;
	// Replace even numbers with nearest prime numbers
	queue.replaceEvenWithNearestPrime();

	// Display the modified queue
	cout << "Queue after replacing even numbers with nearest primes: ";
	queue.display();
	// Delete 3 elements from the queue using pop
	cout << "Deleting 3 elements from the queue..." << endl;
	for (int i = 0; i < 3; i++)
	{
		queue.pop();
	}

	// Display the remaining elements of the queue
	queue.display();

	return 0;
}
