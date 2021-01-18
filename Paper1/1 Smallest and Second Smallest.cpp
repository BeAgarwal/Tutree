//Code written by Shubham Agarwal

#include<iostream>
using namespace std;

int main()
{
	int numberOfElements;
	cin >> numberOfElements;
	int input, minElement = INT_MAX, secondMinElement = INT_MAX;

	for (int itr = 0; itr < numberOfElements; ++itr)
	{
		cin >> input;
		if (input < minElement)
		{
			secondMinElement = minElement;
			minElement = input;
		}
		else if (input < secondMinElement and input != minElement)
		{
			secondMinElement = input;
		}
	}

	cout << "The smallest element is : " << minElement << '\n';
	cout << "The second smallest element is: " << secondMinElement << '\n';

	return 0;
}

/*
Test Case 1:

Input:
6
4 2 6 8 3 5

Output:
The smallest element is : 2
The second smallest element is: 3
*/