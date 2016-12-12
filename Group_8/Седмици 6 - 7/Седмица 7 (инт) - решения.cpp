#include<iostream>
using namespace std;

int main0()   // Reversed array
{
    int arr[20];
    int n;
    
    cout << "n = ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    
    for(int i = 0; i < n / 2; i++)
    {
        arr[i] = arr[n - 1 - i];
    }
    
    cout << "Reversed:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    
    return 0;
}

int main1()     // Sums in columns
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

int main2()     // Bool matrix
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

int main3()    // Sorted matrix
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