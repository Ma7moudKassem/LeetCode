#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {

	int maxAmount = 0;
	int right = 0;
	int left = height.size() - 1;

	while (right < left)
	{
		if (height[right] > height[left])
		{
			maxAmount = max(maxAmount, (left - right) * height[left]);
			left--;
		}
		else
		{
			maxAmount = max(maxAmount, (left - right) * height[right]);
			right++;
		}
	}

	return maxAmount;
}

//1,8,6,2,5,4,8,3,7
int main()
{
	vector<int> arr = { 1,8,6,2,5,4,8,3,7 };
	cout << maxArea(arr);
}