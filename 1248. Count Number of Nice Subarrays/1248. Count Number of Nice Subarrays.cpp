#include <iostream>
#include <vector>
using namespace std;


int subArray(vector<int>& nums, int k)
{
	int i = 0, j = 0, count = 0;

	while (i < nums.size())
	{
		if (nums[i] % 2 != 0)
			k--;

		while (k < 0)
		{
			if (nums[j] % 2 != 0)
				k++;
			j++;
		}
		count += i - j + 1;
		i++;
	}

	return count;
}
int numberOfSubarrays(vector<int>& nums, int k) {

	return subArray(nums, k) - subArray(nums, k - 1);
}

int main()
{
	vector<int> arr = { 2,2,2,1,2,2,1,2,2,2 };
	cout << numberOfSubarrays(arr, 2);
}
