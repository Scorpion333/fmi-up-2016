#include<iostream>
using namespace std;

int main()
{
	cout << "I am a programmer";
	cout << endl;
	cout << endl;

	cout << "Wind of change" << endl;
	cout << "Wind of " << "change" << endl;

	//  Everything after "//" is a comment. The computer does NOT execute comments.
	//  You can write whatever you want here, but it is good if the comment makes sense.


	// A single number input and output
	int a;
	cin >> a;	// Let us say a = 6;
	cout << a;	
	cout << endl;


	// Two numbers output
	int b;
	cin >> b;	// For example, b = 9
	cout << a << b;
	cout << endl;


	// Two numbers output - better
	cout << a << " " << b << endl;
	

	// Changing a number
	a = 2;
	cout << a << " " << b << endl;	// Now  a is 2  and  b is 9.
	b = a;
	cout << a << " " << b << endl;  // Now  a is 2  and  b is 2 too.


	// Some maths
	int c;
	c = a + b;			// c becomes 4.
	c = a + 20;			// c becomes 22.
	c = c + 3;			// c becomes 25.

	c = 6 * 7;			// c becomes 42.
	c = (a + c) / 4;	// c becomes 11.
	c = c + b;			// c becomes 13.

	c = c / 3;		// c is now 4 because 13:3 = 4 and there is a remainder 1.
					// The result of a division of two integers in C++ is always an integer. 
	c = 17 % 5;		// With % we get the remainder, in this case 2.

	int d = 15;		// We can initialize variables with a value;

	d = (17 + 3) % 3 - 7 * 2;	// The priority of operations matters. And integers can be negative.
	
	int something_longerThan_1_Letter;		// The names of variables can be very long.
	something_longerThan_1_Letter = 17;
	cout << something_longerThan_1_Letter << endl;		// That is why we used "" when printing the first words.
	cout << "something_longerThan_1_Letter" << endl;	// See the difference?

	// Let us try something different now - symbols
	char bukva;
	bukva = 'k';	// We write single symbols between ''
	
	// But if we want bukva to become G, we just need to type: G
	cout << "bukva = ";
	cin >> bukva;
	// And it is easier if a message reminds us what are we doing.

	char bukva2 = 'g';	// 'g' is different from 'G'!

	bukva2 = bukva2 + 1; // bukva2 becomes 'h'

	// Symbols can be digits of other signs
	char mySymbol = '5';
	mySymbol = '!';
	mySymbol = ';';

	//There are some special symbols
	mySymbol = '\n';
	cout << "I like C++" << '\n';	// Same as cout << "I like C++" << endl;

	// Conditionals
	if (3 > 5)
		cout << "3 > 5" << endl;
	else
		cout << "3 is not bigger than 5." << endl;

	if (mySymbol == ';')
		cout << "mySymbol              really is ';'." << '\n';
	// Be careful: two '=' signs, not one!

	if (2 - 1 == 4)
		cout << "This text will not be printed." << endl;


	// Variables of type bool
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
		cout << "At least one of them are true.";	// No need of grammar if we understand everything.
	else
		cout << "If you are reading this, both statements are false." << endl;

	cout << myFirstBoolVariable << " _ " << x << endl;
	// What is prited is: 1 _ 0

	system("pause"); // Write this line if your program closes before you want.
	return 0;
}