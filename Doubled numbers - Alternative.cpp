#include<iostream>
using namespace std;

int main()
{
	int n, currentNumber;

	cout << "n = ";
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cout << "Number " << i << " = ";
		cin >> currentNumber;
		cout << "Doubled: " << currentNumber * 2 << endl;
	}
	
	system("pause");
	return 0;
}