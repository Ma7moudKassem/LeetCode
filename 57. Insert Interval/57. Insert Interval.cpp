#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
	intervals.push_back(newInterval);
	sort(intervals.begin(), intervals.end());

	vector<int> temp = intervals[0];
	vector<vector<int>> result;

	for (auto interval : intervals)
	{
		if (temp[1] >= interval[0])
			temp[1] = max(temp[1], interval[1]);
		else
		{
			result.push_back(temp);
			temp = interval;
		}
	}

	result.push_back(temp);

	return result;
}

int main()
{
	vector<vector<int>> mtx = { {1,2} ,{3,5},{6,7},{8,10},{12,16} };
	vector<int> newArr = { 4,8 };
	insert(mtx, newArr);
}