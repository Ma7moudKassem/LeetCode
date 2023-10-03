#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
	int length = nums.size();
	vector<int> ans;

	int i = 0, j = n;
	while (i < n && j < length)
	{
		int temp = nums[i + 1];
		nums[i + 1] = nums[j];
		nums[j] = temp;

		i++;
		j++;
	}

	return nums;
}

int main()
{
}
