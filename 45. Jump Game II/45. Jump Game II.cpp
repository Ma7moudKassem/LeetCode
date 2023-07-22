#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums) {
	int n = nums.size(), visited = 0, count = 0;

	for (int i = 0; i < n; i++)
	{
		if (i > visited)
			return count;

		visited = max(visited, i + nums[i]);
		count++;
	}

	return count;
}

int main()
{
}