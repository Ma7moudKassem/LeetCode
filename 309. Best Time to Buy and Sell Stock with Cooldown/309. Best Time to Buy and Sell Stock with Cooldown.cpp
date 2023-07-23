#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
	int minPrice = INT_MAX, maxProfit = 0, prevPrice = 0, prevProfit = 0;

	for (int price : prices)
	{
		prevPrice = minPrice;
		minPrice = min(minPrice, price - prevProfit);
		prevPrice = maxProfit;
		maxProfit = max(maxProfit, price - prevProfit);
	}

	return maxProfit;
}

int main()
{
	vector<int> arr = { 1,2,3,0,2 };

	cout << maxProfit(arr);
}