#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// using sort o(nlogn)
//int findKthLargest(vector<int>& nums, int k) {
//
//	sort(nums.begin(), nums.end());
//
//	return nums[nums.size() - k];
//}

//using heap and priority queue
int findKthLargest(vector<int>& nums, int k) {

	priority_queue<int> heap;

	for (int n : nums)
	{
		heap.push(n);

		if (heap.size() > nums.size() - k + 1)
			heap.pop();
	}

	return heap.top();
}

int main()
{
	vector<int> arr = { 3,2,1,5,6,4 };

	cout << findKthLargest(arr, 2);
}