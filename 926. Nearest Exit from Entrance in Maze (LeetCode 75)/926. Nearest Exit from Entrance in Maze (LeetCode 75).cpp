#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;

int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
	queue<pair<pair<int, int>, int>> q;
	vector<pair<int, int>> dirs = { {1,0},{0,1},{-1,0},{0,-1} };
	q.push({ {entrance[0],entrance[1]},0 });
	while (!q.empty())
	{
		auto current = q.front();
		q.pop();

		bool isAtTheEntrance = current.first.first == entrance[0] && current.first.second == entrance[1];

		bool isAtTheBorder = current.first.first == 0 || current.first.second == 0 || current.first.first == maze.size() - 1 || current.first.second == maze[0].size() - 1;

		if (!isAtTheEntrance && isAtTheBorder) return current.second;

		for (auto dir : dirs)
		{
			int x = current.first.first + dir.first;
			int y = current.first.second + dir.second;

			if (x < maze.size()
				and y < maze[0].size()
				and x >= 0
				and y >= 0
				and maze[x][y] == '.')
			{
				q.push({ {x,y},current.second + 1 });

				maze[x][y] = '+';
			}
		}
	}

	return -1;
}

int main()
{
	//vector<vector<char>> arr = { {'+','+','.','+' }, {'.','.','.','+'},{'+','+','+','.'} };
	vector<vector<char>> arr = { {'+','+','+' }, {'.','.','.'},{'+','+','+'} };
	//vector<int> ent = { 1,2 };
	vector<int> ent = { 1,0 };

	cout << nearestExit(arr, ent);
}