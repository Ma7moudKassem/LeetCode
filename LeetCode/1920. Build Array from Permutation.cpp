#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr = { 0,2,1,5,3,4 };
	BuildArray(arr);
}

vector<int> BuildArray(vector<int>& nums)
{
	vector<int> ans;
	for (int i = 0; i < ans.size(); i++)
	{
		ans.push_back(nums[nums[i]]);
	}
	return ans;
}