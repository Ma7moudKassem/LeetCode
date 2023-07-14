#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<vector<int>> ans;
void backtracking(vector<int>& nums, int n, int index)
{
	if (index == n)
		ans.push_back(nums);

	unordered_set<int> visited;
	for (int i = index; i <= n; i++)
	{
		if (visited.find(nums[i]) == visited.end())
		{
			swap(nums[index], nums[i]);
			backtracking(nums, n, index + 1);
			swap(nums[index], nums[i]);
			visited.insert(nums[i]);
		}
	}
}
vector<vector<int>> permuteUnique(vector<int>& nums) {

	backtracking(nums, nums.size() - 1, 0);

	return ans;
}

int main()
{
	vector<int> arr = { 1,2,3 };
	permuteUnique(arr);
}
