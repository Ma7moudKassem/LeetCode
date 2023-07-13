#include <iostream>
#include <vector>
#include <set>
using namespace std;

void DFS(vector<int>& temp, vector<vector<int>>& ans, int res, int k, int n)
{
	if (n < 0 || temp.size() > k)
		return;

	if (temp.size() == k && n == 0)
	{
		ans.push_back(temp);
		return;
	}

	for (int i = res; i <= 9; i++)
	{
		temp.push_back(res);
		DFS(temp, ans, i + 1, k, n - i);
		temp.pop_back();
	}
}

vector<vector<int>> combinationSum3(int k, int n) {

	vector<int> temp;
	vector<vector<int>> ans;

	DFS(temp, ans, 1, k, n);

	return ans;
}


int main()
{
	combinationSum3(9, 45);
}