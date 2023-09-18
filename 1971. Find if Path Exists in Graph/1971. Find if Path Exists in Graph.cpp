#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

	unordered_map<int, vector<int>> graph;

	for (auto edge : edges)
	{
		graph[edge[0]].push_back(edge[1]);
		graph[edge[1]].push_back(edge[0]);
	}

	queue<int> queue;
	queue.push(source);

	unordered_map<int, bool> visited;
	visited[source] = true;

	while (!queue.empty())
	{
		int current = queue.front();
		queue.pop();

		if (current == destination)
			return true;
		else
		{
			for (auto n : graph[current])
			{
				if (!visited[n])
				{
					visited[n] = true;
					queue.push(n);
				}
			}
		}
	}

	return false;
}

int main()
{

	vector<vector<int>> data = { {0,1},{1,2},{2,0} };

	cout << validPath(3, data, 0, 2);
}