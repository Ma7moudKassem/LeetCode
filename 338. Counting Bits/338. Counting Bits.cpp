#include <iostream>
#include <vector>
using namespace std;

int get1BitsCount(int n)
{
	int ans = 0;
	while (n)
	{
		if (n & 1)
			ans++;

		n >>= 1;
	}

	return ans;
}
vector<int> countBits(int n) {
	vector<int> dp(n + 1, 0);

	for (int i = 1; i <= n; i++)
		dp[i] = dp[i >> 1] + (i & 1);

	return dp;
}

int main()
{
	countBits(8);
}