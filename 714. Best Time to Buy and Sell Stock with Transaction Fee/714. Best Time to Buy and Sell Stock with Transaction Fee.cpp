#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxProfit(vector<int>& prices, int fee) {

	int minPrice = INT_MAX;
	int maxProfit = 0;

	for (int price : prices)
	{
		minPrice = min(minPrice, price - maxProfit);
		maxProfit = max(maxProfit, price - minPrice - fee);
	}

	return maxProfit;
}

int main()
{
	vector<int> arr = { 1,3,2,8,4,9 };
	cout << maxProfit(arr, 2);
}
