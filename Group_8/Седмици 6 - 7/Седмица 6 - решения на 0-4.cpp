#include<iostream>
using namespace std;

char digit_16(int n)
{
	if (n >= 0 && n <= 9)
		return '0' + n;

	if (n >= 10 && n <= 15)
		return 'A' + n - 10;

	return 0;
}

char first_digit_symbol(int n)
{
	while (n > 9)
	{
		n = n / 10;
	}
	return '0' + n;
}

char first_in_16(int n)
{
	while (n > 15)
	{
		n = n / 16;
	}
	return digit_16(n);
}

bool point_in_square(int x, int y, int N)
{
	return x >= -N && x <= N && y >= -N && y <= N;
}

bool only_even()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	return a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0;
}

int main()
{
	// Time to do some tests!

	cout << "Problem 0." << endl;
	cout << digit_16(7) << " " << digit_16(14) << endl;
	int p = 15;
	cout << digit_16(p) << endl;

	if (digit_16(22) == '\0')
		cout << "digit_16(22) is the special 0." << endl << endl;	// We can have more endl-s.

	cout << "Problems 1 and 2." << endl;
	cout << first_digit_symbol(365) << endl;
	cout << first_digit_symbol(p + 42) << endl;		// 15 + 42 = 57, by the way
	cout << first_in_16(2025) << endl << endl;				// 2025 is 7E9 in base 16.

	cout << "Problem 3." << endl;
	if (point_in_square(5, -6, 7))
		cout << "(5, -6) is in the square when N = 7." << endl;

	if (point_in_square(4, 1, 3))
		cout << "This won't be printed." << endl;
	else
		cout << "(4, 1) is not in the square when N = 3." << endl << endl;

	cout << "Problem 4." << endl;
	
	if (only_even())
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << "Try again: " << endl;

	if (only_even())
		cout << "true" << endl << endl;
	else
		cout << "false" << endl << endl;

	cout << "Have a nice day! :)" << endl;
	return 0;
}