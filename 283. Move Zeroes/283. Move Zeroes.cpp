#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums)
{
	int itr = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != 0)
		{
			nums[itr] = nums[i];
			itr++;
		}
	}
	while (itr < nums.size())
	{
		nums[itr] = 0;
		itr++;
	}
}

//0,1,0,3,12
// 1,0,0,3,12
//
int main()
{
	vector<int> nums = { 0,1,0,3,12 };
	moveZeroes(nums);
}