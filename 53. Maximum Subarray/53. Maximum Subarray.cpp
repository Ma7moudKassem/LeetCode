#include <iostream>
#include <vector>
using namespace std;

//vector<int> DisSortedArray(vector<int>& nums)
//{
//	int i = 0;
//	int count = 0;
//	while (true)
//	{
//		if (i >= nums.size() || i == nums.size() - 1) { i = 0; count++; }
//		if (nums[i] < nums[i + 1])
//		{
//			int temp = nums[i];
//			nums[i] = nums[i + 1];
//			nums[i + 1] = temp;
//		}
//		i++;
//
//		if (count == nums.size()) { return nums; }
//	}
//}

/* ---- Using Force O(N2)
int maxSubArray(vector<int>& nums)
{
	int max = nums[0];
	int sum = 0;
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			sum = sum + nums[j];
			sum = sum + nums[i];
			if (sum > max) { max = sum; sum = sum - nums[i]; }
			else { sum = sum - nums[i]; };
		}
		sum = 0;
	}
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > max) max = nums[i];
	}
	return max;
}
*/

int maxSubArray(vector<int>& nums)
{
	int leader = nums[0];
	int curr_sum = nums[0];

	for (int i = 1; i < nums.size(); i++) {
		curr_sum = max(nums[i], nums[i] + curr_sum);
		leader = max(leader, curr_sum);
	}

	return leader;
}

int main()
{
	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
	int m = maxSubArray(nums);
}
