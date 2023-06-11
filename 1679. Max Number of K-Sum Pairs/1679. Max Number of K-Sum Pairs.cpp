#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maxOperations(vector<int>& nums, int k) {

	int i = 0;
	int j = nums.size() - 1;
	int count = 0;
	sort(nums.begin(), nums.end());

	while (i < j)
	{
		if (nums[i] + nums[j] == k)
		{
			count++;
			i++;
			j--;
		}
		else if (nums[i] + nums[j] < k)
		{
			i++;
		}
		else if (nums[i] + nums[j] > k)
		{
			j--;
		}
	}
	return count;
}

int main()
{
	vector<int> nums = { 4,4,1,3,1,3,2,2,5,5,1,5,2,1,2,3,5,4 };
	cout << maxOperations(nums, 2);
}