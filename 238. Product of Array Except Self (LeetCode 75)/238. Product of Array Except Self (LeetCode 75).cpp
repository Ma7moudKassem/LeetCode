#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
	int n = nums.size();
	vector<int> ans;
	vector<int> before = vector<int>(n);
	vector<int> after = vector<int>(n);

	for (int i = 0; i < nums.size(); i++)
	{
		if (i == 0)
			before[0] = 1;
		else
			before[i] = before[i - 1] * nums[i - 1];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (i == n - 1)
			after[n - 1] = 1;
		else
			after[i] = after[i + 1] * nums[i + 1];
	}

	for (int i = 0; i < n; i++)
		ans.push_back(before[i] * after[i]);

	return ans;
}

//0,2,0,1,4
//0,2,0,1,4
int main()
{

	vector<int> arr = { -1,1,0,-3,3 };
	productExceptSelf(arr);
}