#include <iostream>
#include <Vector>
#include <unordered_map>

using namespace std;

int maxProfit(vector<int>& prices) {

	unordered_map<int, int> mapRes;
	int minIndex = 1;
	int profit = 0;

	for (int i = 1; i <= prices.size(); i++)
		mapRes[i] = prices[i - 1];

	for (int i = 1; i <= prices.size(); i++)
	{
		if (mapRes[minIndex] > mapRes[i])
			minIndex = i;
		if (profit < mapRes[i] - mapRes[minIndex])
			profit = mapRes[i] - mapRes[minIndex];
	}
	return profit;
}

//[7,1,5,3,6,4]
//[1,7],
//[2,1],
//[3,5],
//[4,3],
//[5,6],
//[6,4],
int main()
{
	vector<int> arr = { 8,7,2,3,5 };

	cout << maxProfit(arr);
}