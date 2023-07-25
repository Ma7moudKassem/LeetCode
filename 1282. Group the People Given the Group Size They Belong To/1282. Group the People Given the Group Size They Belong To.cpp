#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>

using namespace std;

//3,3,3,3,3,1,3
#pragma region  Using Brute Force
//vector<int> getIdx(vector<int>& groupSizes, int n)
//{
//	int t = n;
//	vector<int> arr;
//	while (t > 0)
//	{
//		for (int i = 0; i < groupSizes.size(); i++)
//		{
//			if (groupSizes[i] == n)
//			{
//				arr.push_back(i);
//				groupSizes[i] = -1;
//				t--;
//			}
//
//			if (t == 0) return arr;
//		}
//	}
//
//	return arr;
//}
//vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
//
//	int n = groupSizes.size();
//
//	vector<vector<int>> ans;
//
//	for (int i = 0; i < n; i++)
//	{
//		vector<int> arr = getIdx(groupSizes, groupSizes[i]);
//
//		if (arr.size())
//			ans.push_back(arr);
//	}
//
//	return ans;
//}
#pragma endregion

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {

	vector<vector<int>> res;
	unordered_map<int, vector<int>> groups;

	for (int i = 0; i < groupSizes.size(); i++) {
		auto& group = groups[groupSizes[i]];
		group.push_back(i);
		if (group.size() == groupSizes[i]) {
			res.push_back(group);
			group = {};
		}
	}

	return res;
}

int main()
{
	vector<int> arr = { 3,3,3,3,3,1,3 };

	groupThePeople(arr);
}