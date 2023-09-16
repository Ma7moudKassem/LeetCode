#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end());

	vector<vector<int>> result;
	vector<int> temp = intervals[0];

	for (auto& interval : intervals)
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
}