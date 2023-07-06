#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
int count = 0;
void DFS(int node, int parent, vector<vector<pair<int, int>>> graph)
{
	for (auto& n : graph[node])
	{
		if (n.first != n.second)
			count += n.second;
	}
}

int main()
{
	vector<vector<int>> arr = { {0,2 }, { 0,3 }, { 4,1 }, { 4,5 }, { 5,0 } };

	cout << minReorder(6, arr);
}
}