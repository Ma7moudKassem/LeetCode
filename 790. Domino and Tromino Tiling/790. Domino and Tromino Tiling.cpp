#include <iostream>
#include <unordered_map>
using namespace std;

//int tromino = 2;

int numTilings(int n) {

	vector<long long> dp(n + 1, 0);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 5;

	if (n < 4)
		return dp[n];

	for (int i = 4; i <= n; i++)
		dp[i] = 2 * (dp[i - 1] + dp[i - 3]) % 1000000007;

	return dp[n];
}

int main()
{
	cout << numTilings(5);
}
