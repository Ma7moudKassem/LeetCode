#include <iostream>
#include <vector>
using namespace std;

#pragma region Binary Search Imp

int binarySearch(vector<int>& nums, int target)
{
	int left = 0, right = nums.size() - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (nums[mid] == target)
			return mid;
		if (nums[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}

#pragma endregion

int searchInsert(vector<int>& nums, int target)
{
	int result = binarySearch(nums, target);
	if (target > nums[nums.size() - 1]) result = nums.size();
	else if (target < nums[0]) result = 0;

	while (result == -1)
	{
		result = binarySearch(nums, --target);
		if (result != -1)
		{
			result += 1;
			break;
		}
	}
	return result;
}

int main()
{
	vector<int> nums = { 1,3,5,6 };

	cout << searchInsert(nums, 4);
}