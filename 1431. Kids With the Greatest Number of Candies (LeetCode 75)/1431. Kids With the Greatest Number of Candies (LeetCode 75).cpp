#include <iostream>
#include <vector>
using namespace std;



vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

	int maxAmong = 0;

	for (int c : candies)
		maxAmong = max(maxAmong, c);

	vector<bool> result;

	for (int c : candies)
	{
		if (c + extraCandies >= maxAmong)
			result.push_back(true);
		else result.push_back(false);
	}

	return result;
}


int main()
{
	vector<int> candies = { 12,1,12 };

	kidsWithCandies(candies, 3);
}