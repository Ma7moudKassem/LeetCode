#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
	vector<pair<int, int>> arr;
	int n = nums1.size();
	for (int i = 0; i < n; i++)
		arr.push_back({ nums2[i],nums1[i] });

	sort(arr.rbegin(), arr.rend());

	long long sum = 0, ans = 0;
	priority_queue<int> minHeap;

	for (int i = 0; i < k - 1; i++)
	{
		sum += arr[i].second;
		minHeap.push(-arr[i].second);
	}

	for (int i = k - 1; i < nums1.size(); i++)
	{
		sum += arr[i].second;
		minHeap.push(-arr[i].second);

		ans = max(ans, sum * arr[i].first);

		sum += minHeap.top();

		minHeap.pop();
	}

	return ans;
}

int main()
{
	vector<int> arr1 = { 1,3,3,2 };
	vector<int> arr2 = { 2,1,3,4 };

	cout << maxScore(arr1, arr2, 3);
}