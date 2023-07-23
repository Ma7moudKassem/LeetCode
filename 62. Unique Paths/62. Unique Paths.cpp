#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m, vector<int>(n, 1));

	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	}

	return dp[m - 1][n - 1];
}

int main()
{
	cout << uniquePaths(3, 7);
}