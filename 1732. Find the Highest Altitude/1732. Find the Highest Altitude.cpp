#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int>& gain) {

	int largest = 0;

	gain.insert(gain.begin(), 0);

	for (int i = 1; i < gain.size(); i++)
	{
		gain[i] += gain[i - 1];
		largest = max(largest, gain[i]);
	}

	return largest;
}

int main()
{
	vector<int> arr = { -4,-3,-2,-1,4,3,2 };

	cout << largestAltitude(arr);
}