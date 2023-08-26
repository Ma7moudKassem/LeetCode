#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int>& nums, int target, int& start, int& end)
{
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (nums[mid] == target)
			return true;
		else if (nums[mid] > target)
			end = mid - 1;
		else start = mid + 1;
	}

	return false;
}


bool search(vector<int>& nums, int target) {

	int start = 0, end = nums.size() - 1;
	int pivot = 0;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (nums[mid] > nums[mid + 1])
		{
			pivot = mid + 1;
			break;
		}
		else if (nums[mid] == nums[mid + 1])
		{
			start = mid + 1;
		}
		else if (nums[mid] < nums[mid + 1])
			end = mid - 1;
	}

	start = 0, end = pivot - 1;

	bool left = binarySearch(nums, target, start, end);

	if (left)
		return true;

	start = pivot;
	end = nums.size() - 1;

	bool rigth = binarySearch(nums, target, start, end);

	return rigth;
}

int main()
{
	vector<int> arr = { 1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1 };

	cout << search(arr, 2);
}