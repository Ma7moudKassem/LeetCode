#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(int idx, int n, int k, vector<int>& temp, vector<vector<int>>& ans)
{
	if (temp.size() == k)
	{
		ans.push_back(temp);
		return;
	}

	for (int i = idx; i <= n; i++)
	{
		temp.push_back(i);
		backtrack(i + 1, n, k, temp, ans);
		temp.pop_back();
	}
}

vector<vector<int>> combine(int n, int k) {
	vector<int> temp;
	vector<vector<int>> ans;

	backtrack(1, n, k, temp, ans);

	return ans;
}

int main()
{
	combine(4, 2);
}