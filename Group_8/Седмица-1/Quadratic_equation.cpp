#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	if (a == 0)
	{
		cout << "The equation is not quadratic." << endl;
	}
	else
	{
		int D = b * b - 4 * a * c;

		if (D > 0)
		{
			cout << "x1 = " << (-b - sqrt(D)) / (2 * a) << endl;
			cout << "x2 = " << (-b + sqrt(D)) / (2 * a) << endl;
		}
		else
		{
			if (D == 0)
				cout << "x1 = x2 = " << -b / (2 * a) << endl;
			else
				cout << "There are no real solutions." << endl;
		}
	}
	
	system("pause");
	return 0;
}