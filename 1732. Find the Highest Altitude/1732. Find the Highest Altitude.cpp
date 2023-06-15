#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestAltitude(vector<int>& gain) {

	for (int i = 1; i < gain.size(); i++)
		gain[i] += gain[i - 1];
	gain.insert(gain.begin(), 0);

	sort(gain.begin(), gain.end());

	return gain[gain.size() - 1];
}

int main()
{
	vector<int> arr = { -4,-3,-2,-1,4,3,2 };

	cout << largestAltitude(arr);
}