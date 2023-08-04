#include <iostream>
#include <stack>
using namespace std;

class StockSpanner {
public:
	StockSpanner() {

	}

	stack<pair<int, int>> stack;
	int next(int price) {

		int ans = 1;
		while (stack.size() && stack.top().first <= price)
		{
			ans += stack.top().second;
			stack.pop();
		}

		stack.push({ price , ans });

		return ans;
	}
};


int main()
{
}