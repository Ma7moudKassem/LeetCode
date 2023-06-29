#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

	vector<int> arr;
	for (auto n : nums1)
		arr.push_back(n);

	for (auto n : nums2)
		arr.push_back(n);

	sort(arr.begin(), arr.end());

	int n = arr.size();

	return n % 2 == 0 ? (arr[(n - 1) / 2] + arr[((n - 1) / 2) + 1]) / 2.00 : arr[(n - 1) / 2];
}

#pragma region By Brute Force
//double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//
//	vector<int> arr;
//	for (auto n : nums1)
//		arr.push_back(n);
//
//	for (auto n : nums2)
//		arr.push_back(n);
//
//	sort(arr.begin(), arr.end());
//
//	int n = arr.size();
//
//	return n % 2 == 0 ? (arr[(n - 1) / 2] + arr[((n - 1) / 2) + 1]) / 2.00 : arr[(n - 1) / 2];
//}
#pragma endregion


int main()
{

	vector<int> arr1 = { 2,3,4,5 };
	vector<int> arr2 = { 1 };

	cout << findMedianSortedArrays(arr1, arr2);
}