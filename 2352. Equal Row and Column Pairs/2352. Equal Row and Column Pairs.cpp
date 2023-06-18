#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <map>

using namespace std;

int equalPairs(vector<vector<int>>& grid) {
	int count = 0;
	map<vector<int>, int> map;
	for (auto item : grid)
		map[item]++;

	for (int i = 0; i < grid[0].size(); i++)
	{
		vector<int> arr;
		for (int j = 0; j < grid[0].size(); j++)
			arr.push_back(grid[j][i]);

		count += map[arr];

	}
	return count;
}

int main()
{
	vector<vector<int>> arr = { { 3,2,1}, {1,7,6}, {2,7,7} };

	cout << equalPairs(arr);
}