#include<iostream>
using namespace std;

struct Programmer
{
	char name[20];
	int languages;
	int salary;

	void read()
	{
		cout << "name: ";      cin >> name;
		cout << "languages: "; cin >> languages;
		cout << "salary: ";    cin >> salary;
	}
	void print()
	{
		cout << "name: "      << name << endl
			 << "languages: " << languages << endl
			 << "salary: "    << salary << endl;
	}
	bool correctData()
	{
		return languages > 0 && salary > 0;
	}
	bool knowsMoreThan(Programmer other)
	{
		return languages > other.languages;
	}
};

int main()
{
	int n;
	cin >> n;
	Programmer *arr;
	arr = new Programmer[n];

	for (int i = 0; i < n; i++)
	{
		arr[i].read();
	}

	Programmer swap;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i].languages > arr[j].languages)
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}

	cout << endl << "Sorted: " << endl;
	for (int i = 0; i < n; i++)
		if (arr[i].correctData())
			arr[i].print();

	delete[] arr;
	return 0;
}