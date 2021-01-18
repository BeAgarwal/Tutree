//Code written by Shubham Agarwal

#include <bits/stdc++.h>
using namespace std;


int main()
{

	int numberOfElements;
	cin >> numberOfElements;
	int a[numberOfElements];

	for (int i = 0; i < numberOfElements; ++i)
	{
		cin >> a[i];
	}
	int d;
	cin >> d;

	d %= numberOfElements;
	reverse(a, a + numberOfElements);
	reverse(a, a + d);
	reverse(a + d, a + numberOfElements);

	for (int i = 0; i < numberOfElements; ++i)
	{
		cout << a[i] << ' ';
	}
	return 0;
}


/*
Test case:

Input:
6
1 2 3 4 5 6
2

Output:
5 6 1 2 3 4

*/