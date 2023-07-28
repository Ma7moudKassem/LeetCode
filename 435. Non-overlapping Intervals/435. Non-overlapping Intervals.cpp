#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool bySecondElement(vector<int>& a, vector<int> b)
{
	return a[1] < b[1];
}

int eraseOverlapIntervals(vector<vector<int>>& intervals)
{
	sort(intervals.begin(), intervals.end(), bySecondElement);

	int k = INT_MIN, count = 0;
	for (auto interval : intervals)
	{
		int start = interval[0];
		int end = interval[1];

		if (start >= k)
			k = start;
		else
			count++;
	}

	return count;
}


int main()
{
	vector<vector<int>> ints = { {1,100 }, { 11,22 }, { 1,11 }, { 2,12 } };

	cout << eraseOverlapIntervals(ints);
}
