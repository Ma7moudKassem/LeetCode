#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

//Use Force

/*
vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
	vector<int> result;
	int count = 0;
	for (auto n : nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] < n)
				count++;
		}
		result.push_back(count);
		count = 0;
	}
	return result;
}
*/


// Optimized Approach

//vector<int> smallerNumbersThanCurrent(vector<int>& nums)
//{
//	map<int, int>map;
//	vector<int>snum = nums;
//
//	//sort()
//	return 0;
//}

int main()
{
	vector<int> nums = { 8,1,2,2,3 };
	map<int, int>map;
	int count = 0;
	int j = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		map[nums[j]] = nums[i];
		if (j>nums[i])
			count++;

	}
	j++;
	//vector<int> res = smallerNumbersThanCurrent(nums);
}