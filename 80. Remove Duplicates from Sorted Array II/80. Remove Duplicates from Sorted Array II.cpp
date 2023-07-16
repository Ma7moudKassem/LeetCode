#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	int n = nums.size();

	if (n < 3)
		return n;


	int index = 2;

	for (int i = 0; i < n; i++)
	{
		if (nums[i] != nums[index])
		{
			nums[i] = nums[index];
			index++;
		}
	}

	return index;
}

int main()
{
	vector<int> nums = { 1,1,1,2,2,3 };

	cout << removeDuplicates(nums);
}