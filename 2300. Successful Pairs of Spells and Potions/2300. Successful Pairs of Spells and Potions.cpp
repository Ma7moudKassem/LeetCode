#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

	vector<int> ans(spells.size());
	sort(potions.begin(), potions.end());
	long long n = potions.size();
	int i = 0;
	for (auto s : spells)
	{
		int count = 0;
		if (potions[n - 1] * s >= success)
		{
			int first = 0, last = potions.size() - 1;
			while (first <= last)
			{
				int mid = first + (last - first) / 2;
				if (potions[mid] * s >= success)
				{
					count = (potions.size() - 1 - mid) + 1;
					last = mid - 1;
				}
				else if (potions[mid] * s <= success)
					first = mid + 1;
			}
		}

		ans[i] = count;
		i++;
	}

	return ans;
}

int main()
{
	vector<int> arr = { 5,1,3 };
	vector<int> arr2 = { 1,2,3,4,5 };

	successfulPairs(arr, arr2, 7);
}