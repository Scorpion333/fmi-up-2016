#include<iostream>
using namespace std;

void add_to_end(char str[], char sym)
{
	int i = 0;
	while (str[i] != '\0')
		i++;

	str[i] = sym;
	str[i + 1] = '\0';
}

void insert(char str[], char sym, int index)
{
	int i = 0;
	while (str[i] != '\0')
		i++;

	int length = i;
	str[length + 1] = '\0';

	for (i = length - 1; i >= index; i--)
		str[i + 1] = str[i];

	str[index] = sym;
}

void remove_one(char str[], int index)
{
	int length = 0;
	while (str[length] != '\0')
		length++;

	for (int i = index; i <= length - 1; i++)
		str[i] = str[i + 1];
}

void concat(char a[], char b[])
{
	int a_len = 0;
	while (a[a_len] != '\0')
		a_len++;

	int i = 0;
	while (b[i] != '\0')
	{
		a[a_len + i] = b[i];
		i++;
	}
	a[a_len + i] = '\0';
}

// main() for C++.Python.Ruby.Java.Perl.JavaScript.Haskell.C# :
int main1()    
{ 
	char words[8][20];
	for (int i = 0; i < 8; i++)
		cin >> words[i];

	char result[200];
	result[0] = '\0';

	for (int i = 0; i <= 6; i++)
	{
		concat(result, words[i]);
		add_to_end(result, '.');
	}
	concat(result, words[7]);
	cout << result << endl;
}

void count_letters(char str[], int letters[26])
{
	for (int i = 0; i < 26; i++)
		letters[i] = 0;

	int j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			letters[str[j] - 'a']++;

		if (str[j] >= 'A' && str[j] <= 'Z')
			letters[str[j] - 'A']++;

		j++;
	}
}

// main() for counting letters of one word :
int main()
{
	char word[50];
	cin >> word;
	int real_letters[26];
	count_letters(word, real_letters);

	return 0;
}