#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int arithmeticTriplets(vector<int>& nums, int diff) {
	int count = 0;
	unordered_map<int, int>map;

	for (auto n : nums)
		map[n]++;

	for (auto n : nums)
		if (map[n - diff] && map[n + diff])
			count++;

	return count;
}

int main()
{
	vector<int> nums = { 0,1,4,6,7,10 };

	cout << arithmeticTriplets(nums, 3);
}
