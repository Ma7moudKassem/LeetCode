#include <iostream>
#include <Vector>
#include <algorithm>
using namespace std;

int singleNumber(vector<int>& nums) 
{
	sort(nums.begin(), nums.end());

	for (int i = 1; i < nums.size(); i += 2)
		if (nums[i] != nums[i-1])
			return nums[i-1];
	return nums[nums.size() - 1];
}

// [4,1,2,1,2] --

int main()
{
	vector<int> arr = { 4,1,2,1,2 };

	cout << singleNumber(arr);
}
