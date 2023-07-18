#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums)
{
	int n = nums.size(), visited = 0;

	for (int i = 0; i < n; i++)
	{
		if (i > visited)
			return false;

		visited = max(visited, i + nums[i]);
	}

	return true;
}

int main()
{
	vector<int> arr = { 0,2,3 };

	cout << canJump(arr);
}