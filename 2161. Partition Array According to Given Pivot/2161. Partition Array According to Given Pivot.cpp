#include <iostream>
#include <vector>
#include <vector>
#include <queue>
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
	int n = nums.size(), count = 0;
	vector<int> ans(n, 0);
	queue<int> greaterThan;

	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (nums[i] == pivot)
			count++;
		else if (nums[i] < pivot)
		{
			ans[j] = nums[i];
			j++;
		}
		else greaterThan.push(nums[i]);
	}

	while (count)
	{
		ans[j] = pivot;
		count--;
		j++;
	}

	while (greaterThan.size())
	{
		ans[j] = greaterThan.front();
		greaterThan.pop();
		j++;
	}

	return ans;
}
int main()
{
	vector<int> arr = { 9,12,5,10,14,3,10 };
	pivotArray(arr, 10);
}