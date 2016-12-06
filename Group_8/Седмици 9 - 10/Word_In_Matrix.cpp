#include<iostream>
using namespace std;

void readMatrix(char matrix[10][10], int rows, int cols)
{
	cout << "Matrix:" << '\n';
	for (int row = 0; row < rows; row++)
		for (int col = 0; col < cols; col++)
			cin >> matrix[row][col];
}

bool wordThere(char word[], char row[], int col)
{
    int i = 0;
    while(word[i] != '\0' && word[i] == row[col + i])
        i++;
    return word[i] == '\0';
}

int timesWordIsInMatrix(char word[], char matrix[10][10], int rows, int cols)
{
    int len = strlen(word)
    if (len > cols)
        return 0;
    
    int result = 0;
    for(int row = 0; row < rows; row++)
        for(int col = 0; col <= cols - len; col++)
            if(wordThere(word, matrix[row], col))
                result++;
    
    return result;
}

int main()
{
    char word[11], matrix[10][10];
    int rows, cols;
    
    cout << "word: "; cin >> word;
	cout << "rows: "; cin >> rows;
	cout << "cols: "; cin >> cols;
	
    readMatrix(matrix, rows, cols);
	cout << timesWordIsInMatrix(word, matrix, rows, cols);
    return 0;
}