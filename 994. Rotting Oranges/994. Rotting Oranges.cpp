#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {

	int freshOrenges = 0, minutes = -1;

	vector<pair<int, int>> dirs = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
	queue<pair<int, int>> q;

	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[0].size(); j++)
		{
			if (grid[i][j] == 1)
				freshOrenges++;
			else if (grid[i][j] == 2)
				q.push({ i, j });
		}
	}

	while (!q.empty()) {
		int sz = q.size();
		for (int i = 0; i < sz; i++) {
			auto cur = q.front();
			q.pop();
			for (auto dir : dirs) {
				int x = cur.first + dir.first;
				int y = cur.second + dir.second;
				if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 1) 
{
					grid[x][y] = 2;
					q.push({ x, y });
					freshOrenges--;
				}
			}
		}
		minutes++;
	}

	if (freshOrenges > 0)
		return -1;
	else
	{
		if (minutes == -1)
			return 0;
		else return minutes;
	}
}

int main()
{
	vector<vector<int>> grid = { {2,1,1},{1,1,0},{0,1,1} };

	cout << orangesRotting(grid);


}