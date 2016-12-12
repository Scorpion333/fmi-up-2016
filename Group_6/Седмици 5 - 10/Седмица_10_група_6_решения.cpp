#include<iostream>
#include<cstring>
using namespace std;
    
int my_strcmp(char a[], char b[])
{
    int i = 0;
    while(a[i] != '\0' && b[i] != '\0')
    {
        if(a[i] < b[i])
            return -1;
        if(a[i] > b[i])
            return 1;
        i++;
    }
    
    if(a[i] == '\0')
    {
        if(b[i] == '\0')
            return 0;
        return -1;
    }
    return 1;
}

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

// Sorting words by length and lexicographically:
int main()
{
    char words[8][20] = { '\0' };
    
    cout << "Words:" << endl;
    for(int i = 0; i < 8; i++)
        cin >> words[i];
    
    for (int i = 0; i < 8; i++)
		for (int j = i + 1; j < 8; j++)
			if (strlen(words[j]) < strlen(words[i]))
				swapStrings(words[i], words[j]);
            
    cout << "Sorted by length:" << endl;
    for (int i = 0; i < 8; i++)
		cout << words[i] << " ";
	cout << endl;
    
    for (int i = 0; i < 8; i++)
		for (int j = i + 1; j < 8; j++)
			if (strcmp(words[j], words[i]) < 0)
				swapStrings(words[i], words[j]);
   
    cout << "Sorted lexicographically:" << endl;
    for (int i = 0; i < 8; i++)
		cout << words[i] << " ";
	cout << endl;
    
    return 0;
}