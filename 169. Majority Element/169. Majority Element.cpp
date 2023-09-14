#include <iostream>
#include <Vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {

	int count = 0, inr = 0;
	for (int num : nums)
	{
		if (count == 0)
			inr = num;

		if (inr == num)
			count++;
		else
			count--;
	}
	
	return count;
}

int main()
{
	vector<int> nums = { 2,2,1,1,1,2,2 };

	cout << majorityElement(nums);
}