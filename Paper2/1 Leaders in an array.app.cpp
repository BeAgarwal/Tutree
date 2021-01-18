//Code written by Shubham Agarwal

#include<bits/stdc++.h>
using namespace std;

int main() {

	int numberOfElements;
	cin >> numberOfElements;
	int a[numberOfElements];
	for (int itr = 0; itr < numberOfElements; ++itr)
	{
		cin >> a[itr];
	}

	int maxElement =  a[numberOfElements - 1];
	vector<int> leaders;
	leaders.push_back(maxElement);

	for (int itr = numberOfElements - 2; itr >= 0; --itr)
	{
		if (maxElement <= a[itr])
		{
			maxElement = a[itr];
			leaders.push_back(maxElement);
		}
	}
	reverse(leaders.begin(), leaders.end());
	for (int itr = 0; itr < leaders.size(); ++itr)
	{
		cout << leaders[itr] << ' ';
	}

	return 0;
}

/*
Test case:

Input:
6
16 17 4 3 5 2

Output:
17 5 2

*/