#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int>& nums) {

	int i = 0, j = 0, sum = 0;
	int k = 1;
	while (i < nums.size() && k <= 1)
	{
		if (nums[i] == 0)
			k--;

		if (k < 0)
		{
			if (nums[j] == 0)
				k++;
			j++;
		}
		i++;
	}

	return i - j - 1;
}

int main()
{
	vector<int> nums = { 1,1,1};
	cout << longestSubarray(nums);
}