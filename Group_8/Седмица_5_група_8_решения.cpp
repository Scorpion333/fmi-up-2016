#include<iostream>
using namespace std;

int last_digit(int a)
{
	return a % 10;
}

double absolute(double x)
{
	if (x < 0)
	{
		return -x;
	}
	return x;
}

double larger(double x, double y)
{
	if (x > y)
		return x;
	
	return y;
}

double difference(double a, double b)
{
	return absolute(a - b);
}

double power(double x, int y)
{
	double result = 1;
	for (int i = 1; i <= y; i++)
	{
		result = result * x;
	}
	return result;
}

int int_part(double x)
{
	int n = 0;

	while (n <= absolute(x))
	{
		n++;
	}
	n--;

	if (x < 0)
		return -n;

	return n;
}

int int_sqrt(double x)
{
	if (x < 0)
		return -1;
	
	int n = 0;
	while (n*n <= x)
	{
		n++;
	}
	n--;
	return n;
}

bool can_divide_by_8(int a)
{
	return a % 8 == 0;
}

bool sum_can_divide_by_8(int a)
{
	int sum = 0;
	while (a > 0)
	{
		sum += a % 10;
		a = a / 10;
	}
	return can_divide_by_8(sum);
}

bool last_in_16_is_letter(int a)
{
	return a % 16 >= 10;

	/* 
	This is a multi-line comment.
	The last digit is a % 16.
	We want it to be A, B, C, D, E or F.
	So, it must be true that 10 <= a % 16 <= 15.
	a % 16 <= 15 is always true.  */
}

int main()
{
	return 0;
}