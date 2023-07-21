#include <iostream>
#include <vector>
using namespace std;

int ans = 0;
vector<int> t = { 0,1,1,2 };

void dp(int n)
{
	ans = 0;
	for (int i = n - 1; i >= n - 3; i--)
		ans += t[i];

	t.push_back(ans);
}
int tribonacci(int n) {

	if (n < 4)
		return t[n];

	for (int i = 4; i <= n; i++)
		dp(i);

	return ans;
}

int main()
{
	cout << tribonacci(5);
}