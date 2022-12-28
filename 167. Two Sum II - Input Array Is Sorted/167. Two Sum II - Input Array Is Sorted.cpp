#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {

	unordered_map<int, int> visted;
	for (int i = 0; i < numbers.size(); i++)
	{
		int complement = target - numbers[i];

		if (visted.count(complement))
			return { visted[complement] + 1 , i + 1 };

		visted[numbers[i]] = i;
	}
	return{};
}

int main()
{
	vector<int> nums = { 2,7,11,15 };
	vector<int> arr = twoSum(nums, 9);

}