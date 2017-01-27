#include<iostream>
#include<cstring>
using namespace std;

char* copy_of(char* a)
{
	char* newArr;
	newArr = new char[strlen(a) + 1];
	strcpy(newArr, a);
	return newArr;
}

int main()
{
	int n;
	cin >> n;
	char** arr;
	arr = new char*[n];

	for (int i = 0; i < n; i++)
	{
		char* helper;
		helper = new char[20];
		cin >> helper;
		arr[i] = copy_of(helper);
		delete[] helper;
	}

	char* swap;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (strlen(arr[i]) > strlen(arr[j]))
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;

	for (int i = 0; i < n; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;
}