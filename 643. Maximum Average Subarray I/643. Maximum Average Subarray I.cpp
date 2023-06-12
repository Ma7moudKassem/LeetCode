#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {

	double maxAdd = 0;
	for (int i = 0; i < k; i++)
		maxAdd += nums[i];

	double maxWind = maxAdd;
	for (int i = 0; i < nums.size(); i++)
	{
		if (k + i < nums.size())
		{
			maxWind = (maxWind - nums[i]) + nums[i + k];
			maxAdd = max(maxAdd, maxWind);
		}
	}

	return (maxAdd / k);
}

int main()
{
	vector<int> nums = { 1,12,-5,-6,50,3 };

	cout << findMaxAverage(nums, 4);
}