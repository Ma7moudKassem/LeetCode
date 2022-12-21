#include <iostream>
#include <vector>

using namespace std;

vector<int> group;
vector<vector<int>> edges;

bool possibleBipartition(int n, vector<vector<int>>& dislikes)
{
	group.resize(n + 1, -1);
	edges.resize(n + 1);

	for (int i = 0; i < dislikes.size(); i++)
	{
		edges[dislikes[i][0]].push_back(dislikes[i][1]);
		edges[dislikes[i][1]].push_back(dislikes[i][0]);
	}
	for (int i = 0; i < n; i++)
	{
		if (group[i] == -1 && !dfs(i, 0))
			return false;
	}
}

bool dfs(int node, int g)
{
	if (group[node] != -1)
		return group[node] == g;
	group[node] = g;
	g ^= 1;
	for (int i = 0; i < edges[node].size(); i++)
	{
		if (!dfs(edges[node][i], g))
			return false;
	}
	return true;
}

int main()
{

}