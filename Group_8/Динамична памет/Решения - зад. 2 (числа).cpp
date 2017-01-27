#include<iostream>
using namespace std;

int length(int n)
{
	int digits = 0;
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return digits;
}

int main()
{
	int n;
	cin >> n;
	int* arr;
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int swap;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (length(arr[i]) > length(arr[j]))
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	delete[] arr;
	return 0;
}