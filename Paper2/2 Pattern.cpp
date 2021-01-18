//Code written by Shubham Agarwal

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{

	//Upper
	int space = n - 1;

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cout << "*";

		for (int j = 0; j < space; ++j)
			cout << "  ";

		for (int j = 0; j <= i; ++j)
			cout << "*";

		cout << '\n';
		space -= 1;
	}

	//Lower
	space = 0;

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; ++j)
			cout << "*";
		for (int j = 0; j < space; ++j)
			cout << "  ";
		for (int j = 0; j < i; ++j)
			cout << "*";

		cout << '\n';
		space += 1;
	}
}

int main()
{
	int input;
	cin >> input;
	pattern(input);
	return 0;
}


/*
Test case:

Input:
6

Output:
*           *
**         **
***       ***
****     ****
*****   *****
****** ******
*****   *****
****     ****
***       ***
**         **
*           *

*/