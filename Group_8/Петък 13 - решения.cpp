#include<iostream>
using namespace std;

int sum(int* arr, int size)
{
	if (size == 0)
		return 0;

	return arr[size - 1] + sum(arr, size - 1);
}

bool binarySearch(int x, int* arr, int size)
{
	if (size == 0)
		return false;

	if (x == arr[size / 2])
		return true;

	if (x < arr[size / 2])
		return binarySearch(x, arr, size / 2);

	return binarySearch(x, arr + size / 2 + 1, size - size / 2 - 1);
}

struct Student
{
	int fn;
	char name[20];
	double grade;

	void read()
	{
		cin >> fn >> name >> grade;
	}
};

int main()
{
	Student a, b, c;

	a.read();
	b.read();
	c.read();

	cout << "The genius is: ";


	// One solution:

	if(a.grade > b.grade)
	{
		if(a.grade > c.grade)
			cout << a.name;
		else
			cout << c.name;
	}
	else
	{
		if(b.grade > c.grade)
			cout << b.name;
		else
			cout << c.name;
	}
	cout << endl;


	// Better-looking solution:

	Student genius = a;
	if (b.grade > genius.grade)
		genius = b;

	if (c.grade > genius.grade)
		genius = c;

	cout << genius.name << endl;
	
	return 0;
}