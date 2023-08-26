#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countValidPair(vector<int>& nums, int mid)
{
	int count = 0, i = 0;

	while (i < nums.size() - 1)
	{
		if (nums[i + 1] - nums[i] <= mid)
		{
			i++;
			count++;
		}

		i++;
	}

	return count;
}
int minimizeMax(vector<int>& nums, int p) {
	sort(nums.begin(), nums.end());

	int start = 0, end = nums.size() - 1;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (countValidPair(nums, mid) >= p)
			end = mid;
		else
			start = mid + 1;
	}
	return start;
}

int main()
{
	vector<int>
}