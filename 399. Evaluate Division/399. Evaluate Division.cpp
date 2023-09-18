#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
#include <map>
using namespace std;

void dfs(string numerator, string& denominator, unordered_map<string, unordered_map<string, double>>& graph, unordered_set<string>& set, double& val, double temp)
{
	if (set.find(numerator) != set.end())
		return;

	set.insert(numerator);
	if (numerator == denominator)
	{
		val = temp;
		return;
	}

	for (auto n : graph[numerator])
		dfs(n.first, denominator, graph, set, val, temp * n.second);
}
vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
	unordered_map<string, unordered_map<string, double>> graph;
	for (int i = 0; i < equations.size(); i++)
	{
		string numerator = equations[i][0];
		string denominator = equations[i][1];

		double value = values[i];

		graph[numerator][denominator] = value;
		graph[denominator][numerator] = 1 / value;
	}

	vector<double> ans;

	for (auto query : queries)
	{
		string numerator = query[0];
		string denominator = query[1];

		if (graph.find(numerator) == graph.end() || graph.find(denominator) == graph.end())
			ans.push_back(-1);
		else
		{
			unordered_set<string> set;
			double val = -1.0, temp = 1.0;
			dfs(numerator, denominator, graph, set, val, temp);
			ans.push_back(val);
		}
	}

	return ans;
}

int main()
{
	vector<vector<string>> data = { { "a","b" },{"b","c"} };
	vector<double> values = { 2.0,3.0 };
	vector<vector<string>> queries = { { "a","c" },{"b","a"} ,{"a","e"},{"a","a"} ,{"x","x"} };

	calcEquation(data, values, queries);
}