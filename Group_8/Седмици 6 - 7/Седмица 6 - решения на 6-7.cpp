#include<iostream>
using namespace std;

void print_several_times(char sym, int n)
{
	for (int i = 0; i < n; i++)
		cout << sym;
}

void horizontal_line(char sym, int size)
{
	cout << " ";
	print_several_times(sym, size);
	cout << endl;
}

void two_vertical_lines(char sym, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << sym;
		print_several_times(' ', size);
		cout << sym << endl;
	}
}

void print_8(char sym, int size)
{
	horizontal_line(sym, size);
	two_vertical_lines(sym, size);
	horizontal_line(sym, size);
	two_vertical_lines(sym, size);
	horizontal_line(sym, size);
}

int main()
{
    return 0;
}