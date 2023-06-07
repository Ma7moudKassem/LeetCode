#include <iostream>
#include <vector>

using namespace std;

bool increasingTriplet(vector<int>& nums) {

	int n = nums.size();
	if (n < 3)
		return false;
	int mid = INT_MAX;
	int left = INT_MAX;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > mid && nums[i] > left)
			return true;
		else if (nums[i] < mid && nums[i] < left)
			left = nums[i];
		else if (nums[i] > left && nums[i] < mid)
			mid = nums[i];
	}

	return false;
}

//20,100,10,12,30,13

int main()
{
	vector<int> nums = { 5,4,3,2,1 };

	cout << increasingTriplet(nums);
}