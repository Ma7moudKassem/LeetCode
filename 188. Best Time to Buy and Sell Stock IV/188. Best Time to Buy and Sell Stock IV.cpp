#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;


int maxProfit(int k, vector<int>& prices) {

	int n = prices.size();

	vector<int> buy(k + 1, INT_MAX);
	vector<int> profits(k + 1, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			buy[j] = min(buy[j], prices[i] - profits[j - 1]);
			profits[j] = max(profits[j], prices[i] - buy[j]);
		}
	}

	return profits[k];
}

int main()
{
	vector<int> arr = { 3,2,6,5,0,3 };

	cout << maxProfit(2, arr);
}
