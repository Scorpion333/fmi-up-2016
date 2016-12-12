#include<iostream>
using namespace std;

int main0()    // Sums in columns
{
	int matr[10][10];
	int sums[10] = { 0 };
	int N;
	cout << "N = ";
	cin >> N;

	cout << "Matrix:" << endl;
	for (int row = 0; row < N; row++)
		for (int col = 0; col < N; col++)
			cin >> matr[row][col];

	for (int row = 0; row < N; row++)
		for (int col = 0; col < N; col++)
			sums[col] += matr[row][col];

	cout << "Sums:" << endl;
	for (int col = 0; col < N; col++)
		cout << sums[col] << " ";

	return 0;
}

int main1()    // Bool matrix
{
	int matr[10][10];
	bool three[10][10];
	int N;
	cout << "N = ";
	cin >> N;

	cout << "Matrix:" << endl;
	for (int row = 0; row < N; row++)
		for (int col = 0; col < N; col++)
			cin >> matr[row][col];

	for (int row = 0; row < N; row++)
		for (int col = 0; col < N; col++)
			three[row][col] = matr[row][col] % 3 == 0;

	cout << "Bool matrix:" << endl;
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
			cout << three[row][col] << " ";
		cout << endl;
	}
	return 0;
}

int main2()    // Sorting matrix
{
	int matr[10][10];
	int normalArray[100];
	int N;
	cout << "N = ";
	cin >> N;

	cout << "Matrix:" << endl;
	for (int row = 0; row < N; row++)
		for (int col = 0; col < N; col++)
		{
			cin >> matr[row][col];
			normalArray[row * N + col] = matr[row][col];
		}

	for (int i = 0; i < N * N; i++)
		for (int k = i + 1; k < N * N; k++)
			if (normalArray[i] > normalArray[k])
			{
				int swap = normalArray[i];
				normalArray[i] = normalArray[k];
				normalArray[k] = swap;
			}

	cout << "Sorted matrix:" << endl;
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
			cout << normalArray[row * N + col] << " ";
		cout << endl;
	}
	return 0;
}

int main4()    // "up" in matrix
{
	char matr[10][10];
	int N, M;
	cout << "N = ";
	cin >> N;
	cout << "M = ";
	cin >> M;

	cout << "Matrix:" << endl;
	for (int row = 0; row < N; row++)
		for (int col = 0; col < M; col++)
			cin >> matr[row][col];

	int ups = 0;
	for (int row = 0; row < N; row++)
		for (int col = 0; col < M - 1; col++)
			if (matr[row][col] == 'u' && matr[row][col + 1] == 'p')
				ups++;

	cout << "Number of up-s: " << ups << endl;
	return 0;
}

int main()
{
	return 0;
}