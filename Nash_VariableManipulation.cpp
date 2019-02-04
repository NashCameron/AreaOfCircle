/*
	Cameron Nash
	Visual Basic.NET (C++ Independent Study)
	Robert Chapa
	2/3/2019
*/

#include "pch.h"
#include <iostream>

using namespace std; //Just doing this because it's pretty cool.

int main()
{
	int x = 0;
	const int pi = 3.14;
	int area = 0;

    cout << "Hello! Let's find the area of a circle!" << endl;
	cout << "Please enter your x variable and we'll calculate the circle's area using magic: ";
	cin >> x;
	cout << endl;

	cout << "You entered " << x << "." << endl;
	area = (x * pi);

	cout << "Here is the area of your circle: " << area << endl;

	return 0;
}