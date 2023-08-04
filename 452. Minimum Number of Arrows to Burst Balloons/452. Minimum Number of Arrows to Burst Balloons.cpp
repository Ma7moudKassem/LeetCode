#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool orderByFirst(vector<int>& a, vector<int>& b)
{
	return a[0] > b[0];
}
int findMinArrowShots(vector<vector<int>>& points) {

	if (points.size() == 0)
		return 0;

	sort(points.begin(), points.end(), orderByFirst);

	int count = 1;
	int k = points[0][0];

	for (int i = 1; i < points.size(); i++)
	{
		int start = points[i][0];
		int end = points[i][1];

		if (!(k >= start && k <= end))
		{
			count++;
			k = start;
		}
	}

	return count;
}

int main()
{

	vector<vector<int>> arr = { {10,16 }, { 2,8	 }, { 1,6 }, { 7,12 } };

	cout << findMinArrowShots(arr);
}