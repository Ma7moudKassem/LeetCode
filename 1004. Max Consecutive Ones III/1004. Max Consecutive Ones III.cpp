#include <iostream>
#include <vector>

using namespace std;

int longestOnes(vector<int>& nums, int k) {
	int j = 0;
	int i = 0;

	while (i < nums.size())
	{
		if (nums[i] == 0)
			k--;

		if (k < 0)
		{
			if (nums[j] == 0)
				k++;

			j++;
		}

		i++;
	}

	return i - j;
}
//0,0,|1,1,0,0,1,1|,1,0,1,1,0,0,0,1,1,1,1
int main()
{
	vector<int> nums = { 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 };
	cout << longestOnes(nums, 3);
}