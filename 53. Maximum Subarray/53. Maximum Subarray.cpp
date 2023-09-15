#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
	vector<int> dp(nums);

	for (int i = 1; i < nums.size(); i++)
		dp[i] = max(nums[i], nums[i] + dp[i - 1]);

	return *max_element(dp.begin(), dp.end());
}

int main()
{
	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
	cout << maxSubArray(nums);
}
