#include<iostream>
using namespace std;

int evens(int arr[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
		if ((arr[i] & 1) == 0)
			result++;
	return result;
}

int number_after_index(int n, int index)
{
	return n & ((1 << index) - 1);
}

int ones(int n)
{
	int result = 0;
	for (int i = 0; i < 8; i++)
		if ((n & (1 << i)) != 0)
			result++;
	return result;
}

int erase_digit(int n, int index)
{
	return ((n >> (index + 1)) << index) + number_after_index(n, index);
}

int main()
{
	return 0;
}