#include<iostream>
using namespace std;

int main8()
{
    int arr[6];
    
    for(int i = 0; i < 6; i++)
        cin >> arr[i];
    
    for(int i = 0; i < 6; i++)
        cout << arr[i] * 3 << " ";
    
    return 0;
}

int main9()
{
    char arr[6];
    
    for(int i = 0; i < 6; i++)
        cin >> arr[i];
    
    for(int i = 0; i < 6; i++)
        cout >> int(arr[i]) << " ";
    
    return 0;
}

int main10()
{
    int a[5], b[5], i, swap;
    
    for(i = 0; i < 5; i++)
        cin >> a[i];
    
    for(i = 0; i < 5; i++)
        cin >> b[i];
    
    for(i = 0; i < 5; i++)
    {
        swap = a[i];
        a[i] = b[i];
        b[i] = swap;
    }
    
    for(i = 0; i < 6; i++)
        cout << a[i] << " ";
    
    for(i = 0; i < 6; i++)
        cout << b[i] << " ";
    
    return 0;
}

int main()
{
    return 0;
}