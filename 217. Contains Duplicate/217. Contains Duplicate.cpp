#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// HashMap O(N)
bool containsDuplicate(vector<int>& nums)
{
	unordered_map<int, int> visited;

	for (int i = 0; i < nums.size(); i++)
	{
		int target = (2 * nums[i]);
		int complement = target - nums[i];

		if (visited.count(complement))
			return true;

		visited[nums[i]] = i;
	}
	return false;
}
int main()
{
	vector<int> nums = { 1,2,3,1 };
	bool m = containsDuplicate(nums);
}
