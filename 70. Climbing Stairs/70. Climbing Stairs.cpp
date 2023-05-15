#include <iostream>
using namespace std;

int climbStairs(int n) {

	if (n == 1)
		return 1;

	int first = 1;
	int second = 2;
	int result = second;

	for (int i = 3; i <= n; i++)
	{
		result = first + second;
		first = second;
		second = result;
	}

	return result;
}

int main()
{
	cout << climbStairs(5);
}
