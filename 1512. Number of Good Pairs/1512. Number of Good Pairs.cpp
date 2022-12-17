#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//big(O) --> O(N)
int numIdenticalPairs(vector<int>& nums)
{
	unordered_map<int, int> map;
	int count = 0;
	for (auto n : nums)
		cout << map[n]++ << endl;

	return count;
}

int main()
{
	vector<int> num = { 1,2,3,1,1,3 };

	cout << numIdenticalPairs(num);
}