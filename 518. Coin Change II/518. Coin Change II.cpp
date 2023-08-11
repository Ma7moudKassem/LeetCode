#include <iostream>
#include <vector>
#include <map>
using namespace std;


int change(int amount, vector<int>& coins) {
	int n = coins.size();
	vector<int> dp(amount + 1);
	dp[0] = 1;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = coins[i]; j <= amount; j++)
			dp[j] += dp[j - coins[i]];
	}

	return dp[amount];
}

int main()
{
	vector<int> arr = { 1,2,5 };

	cout << change(5, arr);
}