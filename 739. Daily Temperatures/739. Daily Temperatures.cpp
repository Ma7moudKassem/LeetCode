#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
	int n = temperatures.size();
	vector<int> ans(n, 0);
	stack<int> monoStack;

	for (int i = 0; i < n; i++)
	{
		while (monoStack.size()
			&& temperatures[monoStack.top()] < temperatures[i])
		{
			ans[monoStack.top()] = i - monoStack.top();

			monoStack.pop();
		}

		monoStack.push(i);
	}

	return ans;
}

int main()
{
	vector<int> arr = { 73,74,75,71,69,72,76,73 };

	dailyTemperatures(arr);
}