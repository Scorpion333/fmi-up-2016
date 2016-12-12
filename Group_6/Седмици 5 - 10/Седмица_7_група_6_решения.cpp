#include<iostream>
#include<cmath>
using namespace std;

int main1()
{
	int arr[20];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << max - min << endl;
	return 0;
}

int main2()
{
	int a[10], b[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "b[" << i << "] = ";
		cin >> b[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " " << b[i] << endl;
	}
	return 0;
}

int main3()
{
	int arr[20];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	bool three[20];

	for (int i = 0; i < n; i++)
		three[i] = arr[i] % 3 == 0;

	for (int i = 0; i < n; i++)
		cout << three[i];
	
	cout << endl;
	
	return 0;
}

int main4()
{
	int D;
	cin >> D;
	int digits[5];

	for (int i = 4; i >= 0; i--)
	{
		digits[i] = D % 10;
		D /= 10;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << digits[i] << " ";
	}
	return 0;
}

int main5()
{
	int D;
	cin >> D;
	bool bits[8];

	for (int i = 7; i >= 0; i--)
	{
		bits[i] = D % 2 == 1;	// We can also write: bits[i] = D % 2;
		D /= 2;
	}
	for (int i = 0; i < 8; i++)
	{
		cout << bits[i];
	}
	cout << endl;
	return 0;
}

int main6()
{
	bool bits[8];
	int n = 0;

	for (int i = 0; i < 8; i++)
		cin >> bits[i];

	for (int i = 0; i < 8; i++)
		if (bits[i])
			n += pow(2, 7 - i);

	cout << n << endl;
	return 0;
}

int main6_version2()	// with bool variable in the calculations
{
	bool bits[8];
	int n = 0;

	for (int i = 0; i < 8; i++)
		cin >> bits[i];

	for (int i = 0; i < 8; i++)
		n += bits[i] * pow(2, 7 - i);

	cout << n << endl;
	return 0;
}

int main6_version3()	// without pow
{
	bool bits[8];
	int n = 0;

	for (int i = 0; i < 8; i++)
		cin >> bits[i];

	int pow2 = 1;

	for (int i = 7; i >= 0; i--)
	{
		if (bits[i])
			n += pow2;
		pow2 *= 2;
	}

	cout << n << endl;
	return 0;
}

int main()
{	
	return 0;
}