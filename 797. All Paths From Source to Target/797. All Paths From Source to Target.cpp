#include <iostream>
#include <vector>
#include <vector>
#include <queue>
using namespace std;


void dfs(vector<vector<int>>& graph, int current, vector<int>& temp, vector<vector<int>>ans)
{
	temp.push_back(current);

	if (current == graph.size() - 1)
		ans.push_back(temp);
	else
	{
		for (auto curr : graph[current])
			dfs(graph, curr , temp, ans);
	}

	temp.pop_back();
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
	vector<int> temp;
	vector<vector<int>> ans;

	dfs(graph, 0, temp, ans);

	return ans;
}


int main()
{

}