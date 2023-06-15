#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {

	int sum = 0, leftSum = 0, n = nums.size();

	for (int n : nums)
		sum += n;

	for (int i = 0; i < n; i++)
	{
		if (leftSum == sum - leftSum - nums[i])
			return i;

		leftSum += nums[i];
	}
	return -1;
}

int main()
{
	vector<int> prfixNums = { 1,7,3,6,5,6 };

	cout << pivotIndex(prfixNums);
}