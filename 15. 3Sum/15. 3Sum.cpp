#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

	vector<vector<int>> ans;

	if (nums.size() < 3)
		return {};

	sort(nums.begin(), nums.end());

	unordered_map<int, int> map;
	for (int i = 0; i < nums.size(); i++)
		map[nums[i]] = i;

	if (nums[0] > 0)
		return {};

	for (int i = 0; i < nums.size() - 2; i++)
	{
		if (nums[i] > 0)
			break;
		for (int j = i + 1; j < nums.size() - 1; j++)
		{
			int target = (nums[i] + nums[j]) * -1;

			if (map.count(target) && map.find(target)->second > j)
				ans.push_back({ nums[i],nums[j],target });

			j = map.find(nums[j])->second;
		}
		i = map.find(nums[i])->second;
	}

	return ans;
}

int main()
{
	vector<int> arr = { -1,0,1,2,-1,-4 };
	threeSum(arr);
}