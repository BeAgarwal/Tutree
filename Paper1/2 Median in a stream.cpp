//Code written by Shubham Agarwal

#include<bits/stdc++.h>
using namespace std;

priority_queue<int> maxheap;
priority_queue<int, vector<int>, greater<int> > minheap;

void median();
void balance();
void insert(int num);

int main()
{

	int numberOfStreams;
	cin >> numberOfStreams;
	int input;
	for (int itr = 0; itr < numberOfStreams; ++itr)
	{
		cin >> input;
		insert(input);
	}
	return 0;
}

void insert(int num)
{
	if (maxheap.size() == 0)
	{
		maxheap.push(num);
		median();
	}
	else if (num > maxheap.top())
	{
		minheap.push(num);
		balance();
		median();
	}
	else
	{
		maxheap.push(num);
		balance();
		median();
	}
}

void balance()
{
	if ((maxheap.size() - minheap.size()) == 2)
	{
		minheap.push(maxheap.top());
		maxheap.pop();
	}
	else if ((minheap.size() - maxheap.size()) == 1)
	{
		maxheap.push(minheap.top());
		minheap.pop();
	}

}

void median()
{
	if (maxheap.size() - minheap.size() == 1)
	{
		cout << maxheap.top() << '\n';
	}
	else
	{
		cout << ceil((maxheap.top() + minheap.top()) / 2) << '\n';
	}
}

/*
Test case:

Input:
4
5 15 1 3

Output:
5
10
5
4
*/