#include <iostream>
#include <vector>
using namespace std;

long long canEatingAll(vector<int>& piles, int mid)
{
	long long hours = 0;
	for (int p : piles)
	{
		if (p % mid != 0)
			hours += (p / mid) + 1;
		else
			hours += p / mid;
	}

	return hours;
}

int minEatingSpeed(vector<int>& piles, int h) {
	int first = 1, last = *max_element(piles.begin(), piles.end());

	int ans = 0;
	while (first <= last)
	{
		int mid = first + (last - first) / 2;
		long long hours = canEatingAll(piles, mid);

		if (hours <= h)
		{
			ans = mid;
			last = mid - 1;
		}
		else
			first = mid + 1;
	}

	return ans;
}

int main()
{
	vector<int> arr = { 312884470 };

	cout << minEatingSpeed(arr, 312884469);
}
