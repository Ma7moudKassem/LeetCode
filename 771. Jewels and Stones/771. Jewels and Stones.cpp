#include <iostream>
#include <unordered_set>
using namespace std;

int numJewelsInStones(string jewels, string stones)
{
	unordered_set<char> set(jewels.begin(), jewels.end());
	int count = 0;

	for (auto n : stones)
	{
		if (set.count(n))
			count++;
	}
	return count;
}

int main()
{
	cout << numJewelsInStones("aA", "aAAbbbb");
}