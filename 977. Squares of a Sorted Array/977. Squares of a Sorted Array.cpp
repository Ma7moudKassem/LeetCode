#include <iostream>
#include <vector>
using namespace std;

vector<int> getSquares(vector<int>& nums)
{
	vector<int> result;
	for (auto n : nums)
		result.push_back(n * n);

	return result;
}
vector<int> sortedSquares(vector<int>& nums) 
{
	vector<int> result = getSquares(nums);
    sort(result.begin(), result.end());

	return result;
}

int main()
{
}

