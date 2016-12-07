#include<iostream>
#include<cstring>
using namespace std;

const int STRLEN = 20;  // Constants are much better than "magical" numbers.
 
void swapStrings(char a[], char b[])
{
	int i = 0;
	char swap;
	while (a[i] != '\0' || b[i] != '\0')
	{
		swap = a[i];
		a[i] = b[i];
		b[i] = swap;
		i++;
	}
}
/*
    Example: a = "Ruby", b = "Haskell"
    
    Symbols when i = 0:
        0 1 2 3 4 5 6 7 8 9  ...
    a:  R u b y \ \ \ \ \ \  ...
    b:  H a s k e l l \ \ \  ...
    
    Symbols when i = 4:
        0 1 2 3 4 5 6 7 8 9  ...
    a:  H a s k \ \ \ \ \ \  ...
    b:  R u b y e l l \ \ \  ...
    
    Symbols when i = 7:
        0 1 2 3 4 5 6 7 8 9  ...
    a:  H a s k e l l \ \ \  ...
    b:  R u b y \ \ \ \ \ \  ...
    
    The initialization with '\0' allow us to continue swapping
    until both words have reached a '\0'.
    There are other ways to write this function.
*/

void sortByLength(char words[][STRLEN], int numberOfWords)
{
	for (int i = 0; i < numberOfWords; i++)
		for (int j = i + 1; j < numberOfWords; j++)
			if (strlen(words[j]) < strlen(words[i]))
				swapStrings(words[i], words[j]);
}

void sortLexigraphical(char words[][STRLEN], int numberOfWords)
{
	for (int i = 0; i < numberOfWords; i++)
		for (int j = i + 1; j < numberOfWords; j++)
			if (strcmp(words[j], words[i]) < 0)
				swapStrings(words[i], words[j]);
}

void printWords(char words[][STRLEN], int numberOfWords)
{
	for (int i = 0; i < numberOfWords; i++)
		cout << words[i] << " ";
	cout << '\n';
}

int main()
{
	const int WORDS_NUMBER = 8;
	char words[WORDS_NUMBER][STRLEN] = { '\0' };
	// This initialization will be useful later when we swap the words.

	for (int i = 0; i < WORDS_NUMBER; i++)
		cin >> words[i];

	sortByLength(words, WORDS_NUMBER);
	printWords(words, WORDS_NUMBER);
	sortLexigraphical(words, WORDS_NUMBER);
	printWords(words, WORDS_NUMBER);

	return 0;
}