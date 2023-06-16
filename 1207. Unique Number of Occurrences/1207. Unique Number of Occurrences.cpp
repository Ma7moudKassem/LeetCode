#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
	unordered_map<int, int> map, map1;

	for (int n : arr)
		map[n]++;

	for (auto m : map)
		map1[m.second]++;

	for (auto m : map1)
		if (m.second > 1)
			return false;

	return true;
}
int main()
{
}