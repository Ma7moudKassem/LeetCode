#include <iostream>
#include <unordered_map>
using namespace std;
int numTilings(int n) {
	unordered_map<int, long> dp = { {1,1}, {2,2},{3,5} };

	if (n < 4)
		return dp[n];

	for (int i = 4; i <= n; i++)
		dp[i] = (2 * dp[i - 1] + dp[i - 3]) % 1000000007;

	return dp[n];
}

int main()
{
	cout << numTilings(5);
}
