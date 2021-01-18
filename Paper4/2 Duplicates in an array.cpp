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
	for (int i = 0; i < numberOfElements; i++)
	{
		int x = abs(a[i]);
		if (a[x] >= 0)
			a[x] = -a[x];
		else
			cout << x << ' ';
	}
	return 0;
}


/*
Test case:

Input:
7
1 4 4 6 2 1 3

Output:
4 1

*/