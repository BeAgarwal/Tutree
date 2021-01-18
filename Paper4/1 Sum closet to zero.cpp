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
	sort(a, a + numberOfElements);

	int left = 0, right = numberOfElements - 1;
	int sum, minimumSum = INT_MAX;
	int minimumLeft = left, minimumRight = numberOfElements - 1;

	//Two pointer approach
	while (left < right)
	{
		sum = abs(a[left] + a[right]);

		if (sum < minimumSum)
		{
			minimumSum = sum;
			minimumLeft = left;
			minimumRight = right;
		}
		if (sum < 0)
			left++;
		else
			right--;
	}
	cout << a[minimumLeft] << ' ' << a[minimumRight];
	return 0;
}


/*
Test case:

Input:
7
-30 40 50 60 -85 80 95

Output:
-85 80

*/