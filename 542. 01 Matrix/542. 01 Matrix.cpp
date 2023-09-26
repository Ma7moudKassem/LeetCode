#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

	vector<pair<int, int>> dirs = { {0,1},{1,0},{-1,0},{0,-1} };
	queue<pair<int, int>> q;
	vector<vector<int>> ans(mat.size(), vector<int>(mat[0].size(), 0));
	int i = 0;

	for (int i = 0; i < mat.size(); i++)
	{
		for (int j = 0; j < mat[0].size(); j++)
		{
			ans[i][j] = INT_MAX;
			if (mat[i][j] == 0)
			{
				ans[i][j] = 0;

				q.push({ i,j });
			}
		}
	}

	while (!q.empty())
	{
		auto current = q.front();
		q.pop();

		for (auto dir : dirs)
		{
			int x = current.first + dir.first;
			int y = current.second + dir.second;

			if (x >= 0 && x < mat.size() && y >= 0 && y < mat[0].size() && ans[x][y] > ans[current.first][current.second] + 1)
			{
				ans[x][y] = ans[current.first][current.second] + 1;
				q.push({ x,y });
			}
		}
	}

	return ans;
}

int main()
{
	vector<vector<int>> mat = { {0,0,0},{0,1,0},{1,1,1} };

	updateMatrix(mat);
}