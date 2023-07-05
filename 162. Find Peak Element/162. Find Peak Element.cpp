#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
	int first = 0, last = nums.size() - 1;


	while (first <= last)
	{
		int mid = first + (last - first) / 2;

		if (nums[mid] > nums[mid + 1])
			last = mid-1;
		else
			first = mid + 1;
	}

	return first;
}
int main()
{
	vector<int> arr = { 3,2,1 };

	cout << findPeakElement(arr);
}