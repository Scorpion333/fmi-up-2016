#include<iostream>
using namespace std;

void print_digits(int n)
{
    if(n < 10)
        cout << n;
    else
    {
        print_digits(n / 10);
        cout << " " << n % 10;
    }
}

void print_several(char sym, int n)
{
    if(n != 0)
    {
        cout << sym;
        print_several(sym, n - 1);
    }
}

void print_k(int size)
{
    if(size == 0)
    {
        cout << "**" << endl;
        return;
    }
    cout << "*";
    print_several(' ', size);
    cout << "*" << endl;
    
    print_k(size - 1);
    
    cout << "*";
    print_several(' ', size);
    cout << "*" << endl;
}

void print_letters(char start, char end)
{
    if(start > end)
        return;
    
    cout << start;
    print_letters(start + 1, end);
}

int ones(int n)
{
    if(n == 0)
        return 0;
    
    if((n & 1) != 0)
        return 1 + ones(n >> 1);
    
    return ones(n >> 1);
}

int ones_alternative(int n)     // Another way to write this function.
{
    if(n == 0)
        return 0;
    
    return (n & 1) + ones(n >> 1);
}
/*
    If the last bit of n is 1, then n & 1 = 1.
    If the last bit is 0, then n & 0 = 0.
    In both cases, everything is ok.
*/

int main()
{
    return 0;
}