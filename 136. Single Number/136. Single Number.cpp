#include <iostream>
#include <Vector>
#include <algorithm>
using namespace std;

int singleNumber(vector<int>& nums)
{
	int ans = 0;

	for (int n : nums)
		ans ^= n;

	return ans;
}

// [4,1,2,1,2] --

int main()
{
	vector<int> arr = { 4,1,2,1,2 };

	cout << singleNumber(arr);
}
