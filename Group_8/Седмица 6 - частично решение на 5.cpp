#include<iostream>
using namespace std;

int reduce()
{
	char sym;
	cin >> sym;

	int n;
	cin >> n;

	int x;

	if (sym == '+')
	{
		int sum = 0;
		for (int i = 0; i < n; i++)		// This cycle will be executed n times
		{
			cin >> x;
			sum = sum + x;
		}
		return sum;
	}

	if (sym == '*')
	{
		int product = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			product = product * x;
		}
		return product;
	}

	if (sym == '-')
	{
		cin >> x;		// The first input is out of the cycle
		int max = x;	// because we need initial value
		int min = x;	// for max and min.

		for (int i = 1; i < n; i++)		// This cycle will be executed n-1 times
		{
			cin >> x;
			if (x > max) max = x;
			if (x < min) min = x;
		}
		return max - min;
	}

	return 0;
	// The function must always return a value.
	// This topic will be discussed later.
}

int main()
{
	cout << reduce() << endl;
	return 0;
}