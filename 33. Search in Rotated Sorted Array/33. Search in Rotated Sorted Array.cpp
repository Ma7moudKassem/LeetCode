#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int target, int& start, int& end)
{
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (nums[mid] == target)
			return mid;

		if (nums[mid] > target)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return -1;
}


int search(vector<int>& nums, int target) {

	int start = 0; int end = nums.size() - 1;
	int pivot = 0;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (nums[mid] > nums[nums.size() - 1])
			start = mid + 1;
		else
			end = mid - 1;
	}

	pivot = start;

	start = 0, end = pivot - 1;

	int ans = binarySearch(nums, target, start, end);

	if (ans != -1)
		return ans;

	start = pivot;
	end = nums.size() - 1;

	return binarySearch(nums, target, start, end);
}

int main()
{
	vector<int> arr = { 1 };

	cout << search(arr, 0);
}