#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

	vector<int> ans(nums.size(), 0);
	int i = 0, j = 1;
	for (auto num : nums)
	{
		if (num > 0)
		{
			ans[i] = num;
			i += 2;
		}
		else
		{
			ans[j] = num;
			j += 2;
		}
	}

	return ans;
}

int main()
{
}