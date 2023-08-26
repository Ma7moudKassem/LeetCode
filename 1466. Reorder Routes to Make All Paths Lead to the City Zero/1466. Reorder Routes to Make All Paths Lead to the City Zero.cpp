#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
int count = 0;
void dfs(int node, int parent, vector<vector<pair<int, int>>>& adj) {
    for (auto& [child, sign] : adj[node]) {
        if (child != parent) {
            count += sign;
            dfs(child, node, adj);
        }
    }
}

int minReorder(int n, vector<vector<int>>& connections) {
    vector<vector<pair<int, int>>> adj(n);
    for (auto& connection : connections) {
        adj[connection[0]].push_back({ connection[1], 1 });
        adj[connection[1]].push_back({ connection[0], 0 });
    }
    dfs(0, -1, adj);
    return count;
}

int main()
{
	vector<vector<int>> arr = { {0,2 }, { 0,3 }, { 4,1 }, { 4,5 }, { 5,0 } };

	cout << minReorder(6, arr);
}