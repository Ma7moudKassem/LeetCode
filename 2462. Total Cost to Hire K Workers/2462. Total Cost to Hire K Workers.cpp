#include <iostream>
#include <vector>
#include <queue>

using namespace std;

long long totalCost(vector<int>& costs, int k, int candidates) {
	priority_queue<int> head, tail;
	int n = costs.size();
	long long ans = 0;
	for (int i = 0; i < candidates; i++)
	{
		if (costs[i] != -1)
		{
			head.push(-costs[i]);
			costs[i] = -1;
		}
	}

	for (int i = n - 1; i >= n - candidates; i--)
	{
		if (costs[i] != -1)
		{
			tail.push(-costs[i]);
			costs[i] = -1;
		}
	}

	int i = candidates, j = costs.size() - candidates - 1;

	while (k > 0)
	{
		if (tail.size() && !head.size())
		{
			ans += -tail.top();
			tail.pop();
		}
		else if (head.size() && !tail.size())
		{
			ans += -head.top();
			head.pop();
		}
		else
		{
			if (-tail.top() >= -head.top())
			{
				ans += -head.top();
				head.pop();
				if (costs[i] != -1)
				{
					head.push(-costs[i]);
					costs[i] = -1;
					i++;
				}
			}
			else
			{
				ans += -tail.top();
				tail.pop();
				if (costs[j] != -1)
				{
					tail.push(-costs[j]);
					costs[j] = -1;
					j--;
				}
			}
		}
		k--;
	}

	return ans;
}

int main()
{
	vector<int> arr = { 10,1,11,10 };

	cout << totalCost(arr, 2, 1);
}