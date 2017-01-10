#include<iostream>
#include<cstring>
using namespace std;

void problem0(char* str, int* n)
{
	*n = strlen(str);
}

void swap(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

void printEven(char* str)
{
	char* p = str;
	while (*p != '\0')
	{
		cout << *p;
		p++;
		if (*p == '\0')
			return;
		p++;
	}
}

bool correctPositiveInteger(char* str)
{
	char* p = str;
	if (*p < '1' || *p > '9')
		return false;

	while (*p != '\0')
	{
		if (*p < '0' || *p > '9')
			return false;
		p++;
	}
	return true;
}

int main()		// main() for problem 4.
{
	double arr[5];

	for (int i = 0; i < 5; i++)
		cin >> *(arr + i);

	for (int i = 0; i < 5; i++)
		cout << 2 * (*(arr + i)) << endl;

	return 0;
}