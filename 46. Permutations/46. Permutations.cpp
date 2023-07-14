// 46. Permutations.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<vector<int>>& ans, vector<int>& nums, vector<int>& temp)
{
	if (temp.size() == nums.size())
	{
		ans.push_back(temp);
		return;
	}

	for (int n : nums)
	{
		if (find(temp.begin(), temp.end(), n) == temp.end())
		{
			temp.push_back(n);
			backtrack(ans, nums, temp);
			temp.pop_back();
		}
	}
}
vector<vector<int>> permute(vector<int>& nums) {
	vector<int> temp;
	vector<vector<int>> ans;

	backtrack(ans, nums, temp);

	return ans;
}

int main()
{
	vector<int> nums = { 1,2,3 };

	permute(nums);
}
