#include <iostream>
#include<vector>
using namespace std;

//[1,4,2,10,2,3,1,0,20] key=4
#pragma region  using force O(N^2)

int maxArr1(vector<int> arr, int k)
{
	int max = 0;
	if (arr.size() < k) return -1;

	for (int i = 0; i < arr.size(); i++)
	{
		int sum = 0;
		for (int j = i; j < k + i; j++)
		{
			if (j < arr.size())
				sum += arr[j];
		}

		if (sum > max) max = sum;
	}

	return max;
}

#pragma endregion

#pragma region Using Sliding Window O(N)

int maxArr(vector<int> arr, int k)
{
	int max = 0;

	if (arr.size() < k) return -1;

	for (int i = 0; i < k; i++)
		max += arr[i];

	int windowSum = max;

	for (int i = k; i < arr.size(); i++)
		windowSum = windowSum - arr[i - k] + arr[i];

	if (windowSum > max) max = windowSum;

	return max;
}

#pragma endregion




int main()
{
	vector<int> arr = { 1,4,2,10,2,3,1,0,20 };

	cout << "Max Array = " << maxArr(arr, 4);
}