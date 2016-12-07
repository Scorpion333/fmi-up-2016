#include<iostream>
using namespace std;

void readMatrix(char matrix[10][10], int rows, int cols)
{
	cout << "Matrix:" << '\n';
	for (int row = 0; row < rows; row++)
		for (int col = 0; col < cols; col++)
			cin >> matrix[row][col];
}

bool goodDirection(int row, int col, int rowChange, int colChange, int rows, int cols)
{
	return (rowChange != 0 || colChange != 0)
		&& row + rowChange >= 0 && row + rowChange < rows
		&& col + colChange >= 0 && col + colChange < cols;
}

int countUps(char matrix[10][10], int rows, int cols)
{
	int ups = 0;
    for (int row = 0; row < rows; row++)
		for (int col = 0; col < cols; col++)
			if (matrix[row][col] == 'u')
				for (int rowChange = -1; rowChange <= 1; rowChange++)
					for (int colChange = -1; colChange <= 1; colChange++)
						if (goodDirection(row, col, rowChange, colChange, rows, cols))
							if (matrix[row + rowChange][col + colChange] == 'p')
								ups++;
    return ups;
}

int main()
{
	char matrix[10][10];
	int rows, cols, ups = 0;
	
    cout << "rows: "; cin >> rows;
	cout << "cols: "; cin >> cols;
	
    readMatrix(matrix, rows, cols);
	cout << "ups = " << countUps(matrix, rows, cols) << '\n';
	return 0;
}
