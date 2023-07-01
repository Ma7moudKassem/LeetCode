#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<int>>& isConnected, vector<bool>& visited, int j)
{
	visited[j] = 1;

	for (int i = 0; i < isConnected.size(); i++)
		if (isConnected[j][i] && !visited[i])
			DFS(isConnected, visited, i);
}


int findCircleNum(vector<vector<int>>& isConnected) {

	vector<bool> visited(isConnected.size());
	int count = 0;

	for (int i = 0; i < isConnected.size(); i++)
	{
		if (!visited[i])
		{
			count++;
			DFS(isConnected, visited, i);
		}
	}

	return count;
}

int main()
{
	vector<vector<int>> graph = { {2,3,1},{1,6,7},{9,10,2} };

	findCircleNum(graph);
}