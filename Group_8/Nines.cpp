#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int k, n, twin, digit, smaller, decPower;
	cout << "k = ";
	cin >> k;
	for (int n = 405; n < k; n += 405)
	{
		twin = n;
		decPower = 1;
		
		do {
			digit = twin % 10;
			twin = twin / 10;
			if (digit == 0)
				smaller = twin * decPower + n % decPower;
			else
				smaller = 1;
			decPower = decPower * 10;
		} while (twin>0 && n != smaller * 9);
		
		if (twin > 0)
			cout << n << endl;
	}

	system("pause");
	return 0;
}