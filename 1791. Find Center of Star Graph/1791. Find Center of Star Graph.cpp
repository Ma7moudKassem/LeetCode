#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findCenter(vector<vector<int>>& edges) {
	return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
}
int main()
{
	vector<vector<int>> graph = { {1,2},{2,3},{4,2} };

	cout << findCenter(graph);
}