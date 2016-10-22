#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[100];

	cout << "n = ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] * 2;
	}

	cout << "Doubled:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	system("pause");
	return 0;
}