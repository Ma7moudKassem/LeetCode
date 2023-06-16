#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#pragma region Using Unordered_Map
//vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//	unordered_map<int, int> map1, map2;
//	vector<int> arr1, arr2;
//
//	for (int n : nums1)
//		map1[n]++;
//
//	for (int n : nums2)
//		map2[n]++;
//
//	for (auto n : map1)
//	{
//		if (!map2[n.first])
//			arr1.push_back(n.first);
//	}
//
//	for (auto n : map2)
//	{
//		if (!map1[n.first])
//			arr2.push_back(n.first);
//	}
//	return { arr1,arr2 };
//}
#pragma endregion


// Using Unordered_Set
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
	unordered_set<int> set1(nums1.begin(), nums1.end()),
		set2(nums2.begin(), nums2.end());
	vector<int> arr1, arr2;

	for (auto n : set1)
		if (!set2.count(n))
			arr1.push_back(n);

	for (auto n : set2)
		if (!set1.count(n))
			arr2.push_back(n);

	return { arr1,arr2 };
}

int main()
{
	vector<int> arr = { 1,2,3 };
	vector<int> arr2 = { 2,4,6 };

	findDifference(arr, arr2);
}
