#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// use Force O(N^2)
//vector<int> twoSum(vector<int>& nums, int target) 
//{
//	vector<int> result;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		for (int j = i + 1; j < nums.size(); j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				result.push_back(i);
//				result.push_back(j);
//			}
//		}
//	}
//
//	return result;
//}

//use HashMap ===> O(N)
vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int, int> visited;
    for (int i = 0; i < nums.size(); i++) 
    {
        int complement = target - nums[i];

        if (visited.count(complement)) 
            return { visited[complement], i };

        visited[nums[i]] = i;
    }

    return {};
}

int main()
{
	vector<int> arr = { 2,7,11,15 };
	vector<int> c = twoSum(arr, 9);

	cout << "";
}
