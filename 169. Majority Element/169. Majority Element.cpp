#include <iostream>
#include <Vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {

	unordered_map<int, int> map;
	for (auto n : nums)
		map[n]++;

	int max = 0;
	int result = 0;
	for (auto m : map)
	{
		if (m.second > max)
		{
			max = m.second;
			result = m.first;
		}
	}

	return result;
}

int main()
{
	vector<int> nums = { 2,2,1,1,1,2,2 };

	cout << majorityElement(nums);
}