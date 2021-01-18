//Code written by Shubham Agarwal

#include <bits/stdc++.h>
using namespace std;

int distance(int a[], int n, int x, int y)
{
	int j = -1, diff = 1e9;

	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] == x or a[i] == y and (j != -1 and a[i] != a[j]))
		{
			diff > i - j ? diff = i - j : diff, j = i;
		}
	}
	if (diff == 1e9)
		return -1;

	return diff;
}

int main()
{
	int numberOfElements;
	cin >> numberOfElements;
	int a[numberOfElements];
	for (int i = 0; i < numberOfElements; ++i)
	{
		cin >> a[i];
	}
	int x, y;
	cin >> x >> y;
	cout <<  distance(a, numberOfElements, x, y);
	return 0;
}


/*
Test case:

Input:
8
2 5 3 5 4 4 2 3
3 2

Output:
1

*/