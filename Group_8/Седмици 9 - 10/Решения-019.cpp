#include<iostream>
#include<cstring>
using namespace std;

bool symbol_in(char sym, char word[])
{
	int i = 0;
	while (word[i] != '\0')
	{ 
		if (word[i] == sym) 
			return true;
		i++;
	}
	return false;
}

int how_many(char sym, char str[])
{
	int result = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sym)
			result++;
		i++;
	}
	return result;
}

bool anagrams(char a[], char b[])
{
	if (strlen(a) != strlen(b))
		return false;

	int i = 0;
	while (a[i] != '\0')
	{
		if (!symbol_in(a[i], b))
			return false;
		i++;
	}
	return true;
}

int main()
{    
	return 0;
}