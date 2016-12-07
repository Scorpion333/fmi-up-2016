#include<iostream>
using namespace std;

void read(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i << ": ";
		cin >> arr[i];
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << "Element " << i << ": " << arr[i] << endl;
}

bool member(int candidate, int arr[], int size)
{
	for (int i = 0; i < size; i++)
		if (arr[i] == candidate)
			return true;
	return false;
}

void sort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		for (int k = i + 1; k < size; k++)
			if (arr[k] < arr[i])
			{
				int swap = arr[i];
				arr[i] = arr[k];
				arr[k] = swap;
			}
}

void find_even(int arr[], bool even[], int size)
{
	for (int i = 0; i < size; i++)
		even[i] = arr[i] % 2 == 0;
}

int length(char str[])
{
	int len = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return len;
}

bool same(char a[], char b[])
{
	int len = length(a);
	if (length(b) != len)
		return false;

	for (int i = 0; i < len; i++)
		if (a[i] != b[i])
			return false;
	
	return true;
}

bool same_alternative(char a[], char b[])
{
	if (length(a) != length(b))
		return false;

	int i = 0;
	while (a[i] != '\0')	// It would be the same if we wrote:  while (b[i] != '\0')
	{
		if (a[i] != b[i])
			return false;
		i++;
	}
	return true;
}

bool same_optimal(char a[], char b[])
{
	int i = 0;
	while (a[i] != '\0' && b[i] != '\0')	// We check until the end of at least one of the strings.
	{
		if(a[i] != b[i])
			return false;
		i++;
	}
	
	/*
		We are sure that either a[i] or b[i] is '\0'
		But if one of them is different from '\0', this means that one of the string is longer than the other.
		So both a[i] and b[i] must be '\0'.
		As we know that at least one is '\0', they would be both '\0' if and only if they are equal.
	*/
	return a[i] == b[i];
}

int main()
{
	return 0;
}
