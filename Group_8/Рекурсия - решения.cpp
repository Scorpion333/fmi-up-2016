#include<iostream>
using namespace std;

void print_digits(int n)
{
	if (n < 10)
	{
		cout << n;
		return;
	}
	cout << n % 10;
	cout << " ";
	print_digits(n);
}

void print_several(char sym, int n)
{
	if (n == 0)
	{
		return;
	}
	cout << sym;
	print_several(sym, n - 1);
}

void print_k(int n)
{
	if (n == 0)
	{
		cout << "**" << endl;
		return;
	}
	cout << "*";
	print_several(' ', n);
	cout << "*" << endl;

	print_k(n - 1);

	cout << "*";
	print_several(' ', n);
	cout << "*" << endl;
}

int letters_in_16(int n)
{
	if (n < 10)
		return 0;

	if (n % 16 > 9)
		return 1 + letters_in_16(n / 16);

	return letters_in_16(n / 16);
}

int letters_in_16_shorter(int n) // Another way to write this function
{
	if (n < 10)
		return 0;

	return (n % 16 > 9) + letters_in_16_shorter(n / 16);
}