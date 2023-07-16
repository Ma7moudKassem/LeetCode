#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

	int i = m;
	int j = 0;
	while (i < m + n)
	{
		nums1[i] = nums2[j];
		i++;
		j++;
	}

	sort(nums1.begin(), nums1.end());
}

int main()
{
	vector<int> arr1 = {1 };
	vector<int> arr2 = { };
	merge(arr1, 3, arr2, 3);
}