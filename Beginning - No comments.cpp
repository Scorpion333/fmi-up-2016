#include<iostream>
using namespace std;

int main()
{
	cout << "I am a programmer";
	cout << endl;
	cout << endl;

	cout << "Wind of change" << endl;
	cout << "Wind of " << "change" << endl;

	int a;
	cin >> a;
	cout << a;	
	cout << endl;


	int b;
	cin >> b;
	cout << a << b;
	cout << endl;


	cout << a << " " << b << endl;
	

	a = 2;
	cout << a << " " << b << endl;
	b = a;
	cout << a << " " << b << endl;


	int c;
	c = a + b;	
	c = a + 20;	
	c = c + 3;

	c = 6 * 7;
	c = (a + c) / 4;
	c = c + b;

	c = c / 3;		 
	c = 17 % 5;		

	int d = 15;		
	d = (17 + 3) % 3 - 7 * 2;
	
	int something_longerThan_1_Letter;
	something_longerThan_1_Letter = 17;
	cout << something_longerThan_1_Letter << endl;
	cout << "something_longerThan_1_Letter" << endl;

	char bukva;
	bukva = 'k';
	
	cout << "bukva = ";
	cin >> bukva;

	char bukva2 = 'g';

	bukva2 = bukva2 + 1;

	char mySymbol = '5';
	mySymbol = '!';
	mySymbol = ';';

	mySymbol = '\n';
	cout << "I like C++" << '\n';

	if (3 > 5)
		cout << "3 > 5" << endl;
	else
		cout << "3 is not bigger than 5." << endl;
	
	if (mySymbol == ';')
		cout << "mySymbol              really is ';'." << '\n';

	if (2 - 1 == 4)
		cout << "This text will not be printed." << endl;
	
	
	if(a > 9)
	{
		cout << a << " is bigger than 9." << endl;
		a = a - 1;
	}
	else
	{
		cout << a << " is not bigger than 9." << endl;
		a = a + 1;
	}


	bool myFirstBoolVariable;
	myFirstBoolVariable = true;	
	bool x = false;

	if (myFirstBoolVariable) cout << "True!";
	if (x)
		cout << "X is true.";
	else
		cout << "X is false.";

	if (x == false)
		cout << "X really is false.";

	myFirstBoolVariable = 4 == 2 + 3 - 1;

	if (myFirstBoolVariable && 4 - 5 == 0)
		cout << "Both are true";
	else
		cout << "It is NOT true that both  myFirstBoolVariable  and the statement  4 - 5 = 0  are true." << endl;

	if (myFirstBoolVariable || 4 - 5 == 0)
		cout << "At least one of them are true.";
	else
		cout << "If you are reading this, both statements are false." << endl;

	cout << myFirstBoolVariable << " _ " << x << endl;
	
	system("pause");
	return 0;
}