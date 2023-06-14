#include <iostream>
#include <vector>

using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {

	int sum = 0;
	int count = 0;
	int i = 0, j = 0;
	while (i < arr.size())
	{
		sum += arr[i];
		if (i - j + 1 == k)
		{
			if (sum / k >= threshold)
				count++;

			sum -= arr[j];
			j++;
		}

		i++;
	}

	return count;
}

int main()
{
	vector<int> arr = { 11,13,17,23,29,31,7,5,2,3 };
	cout << numOfSubarrays(arr, 3, 5);
}