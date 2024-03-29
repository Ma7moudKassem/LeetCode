#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
	int firstBuy = INT_MAX,
		firstProfit = INT_MIN,
		secondBuy = INT_MAX,
		secondProfit = INT_MIN;

	for (int price : prices)
	{
		firstBuy = min(firstBuy, price);
		firstProfit = max(firstProfit, price - firstBuy);
		secondBuy = min(secondBuy, price - firstProfit);
		secondProfit = max(secondProfit, price - secondBuy);
	}

	return secondProfit;
}
int main()
{
	vector<int> arr = { 3,3,5,0,0,3,1,4 };
	cout << maxProfit(arr);
}