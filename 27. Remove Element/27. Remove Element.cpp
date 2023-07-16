#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int removeElement(std::vector<int>& nums, int val) {
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != val)
		{
			nums[count] = nums[i];
			count++;
		}
	}

	return count;
}


int main()
{
	vector<int> arr = { 3,2,2,3 };

	cout << removeElement(arr, 3);
}