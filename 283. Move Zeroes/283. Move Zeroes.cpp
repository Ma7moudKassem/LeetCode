#include <vector>
#include <iostream>

using namespace std;

int zeroConut(vector<int>& nums)
{
	int zeroConut = 0;
	for (auto n : nums)
		if (n == 0)
			zeroConut += 1;

	return zeroConut;
}

void moveZeroes(vector<int>& nums) {

	vector<int> result;

	int k = zeroConut(nums);
	if (k != 0)
	{
		for (auto n : nums)
		{
			if (n != 0)
				result.push_back(n);
		}
		for (int i = 0; i < k; i++)
			result.push_back(0);

		nums = result;
	}
}
int main()
{
	vector<int> nums = { 4,2,4,0,0,3,0,5,1,0 };
	moveZeroes(nums);
}