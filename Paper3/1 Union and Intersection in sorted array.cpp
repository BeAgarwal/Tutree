//Code written by Shubham Agarwal

#include <bits/stdc++.h>
using namespace std;


int main()
{

	int numberOfElementsA, numberOfElementsB;
	cin >> numberOfElementsA;

	int x;
	set<int> s;

	for (int i = 0; i < numberOfElementsA; ++i)
	{
		cin >> x;
		s.insert(x);
	}

	cin >> numberOfElementsB;

	vector<int> intersectionAB;

	for (int i = 0; i < numberOfElementsB; ++i)
	{
		cin >> x;
		if (s.find(x) != s.end())
			intersectionAB.push_back(x);
		s.insert(x);
	}

	cout << "UnionAB : ";;
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ';
	}

	cout << "\nIntersectionAB : ";
	for (int i = 0; i < intersectionAB.size(); i++)
	{
		cout << intersectionAB[i] << ' ';
	}
	return 0;
}


/*
Test case:

Input:
5
1 3 4 5 7
4
2 3 5 6

Output:
UnionAB : 1 2 3 4 5 6 7
IntersectionAB : 3 5

*/