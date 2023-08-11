#include <iostream>
#include <vector>
using namespace std;

int deleteAndEarn(vector<int>& nums) {

	int maxElement = 0, n = nums.size();

	for (int num : nums)
		maxElement = max(maxElement, num);

	vector<int> dp(maxElement + 1, 0);

	for (int num : nums)
		dp[num] += num;

	int i = 2;

	while (i < maxElement + 1)
	{
		dp[i] = max(dp[i - 1], dp[i] + dp[i - 2]);

		i++;
	}

	return dp[i - 1];
}

int main()
{
	vector<int> arr = { 3,4,2 };

	cout << deleteAndEarn(arr);
}