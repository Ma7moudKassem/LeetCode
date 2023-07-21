#include <iostream>
#include <vector>
#include <set>
using namespace std;

int rob(vector<int>& nums) {
	int n = nums.size();

	int num1 = nums[0];
	if (n == 1)
		return num1;

	int num2 = max(nums[0], nums[1]);
	if (n == 2)
		return num2;

	int sum = 0;
	for (int i = 2; i < n; i++)
	{
		int temp = num2;
		sum = max(nums[i] + num1, num2);
		num2 = sum;
		num1 = temp;
	}

	return sum;
}

int main()
{
	vector<int> nums = { 5, 5, 10, 100, 10, 5 };
	cout << findMaxSum(nums, 6);
}