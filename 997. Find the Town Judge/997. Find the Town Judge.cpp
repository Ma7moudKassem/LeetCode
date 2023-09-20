#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {

	if (n == 1 && trust.empty())
		return 1;

	unordered_map<int, int> graph;

	for (auto person : trust)
	{
		graph[person[1]]++;
		graph[person[0]]--;
	}

	for (auto g : graph)
		if (g.second == n - 1)
			return g.first;

	return -1;
}

int main()
{

}