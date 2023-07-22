#include <iostream>
#include <unordered_map>
using namespace std;


unordered_map<int, int> dp;

int tribonacci(int n) {

	if (n < 3)
		return n == 0 ? 0 : 1;

	int num1 = 0, num2 = 1, num3 = 1;

	for (int i = 0; i < n - 2; i++)
	{
		int temp = num1 + num2 + num3;
		num1 = num2;
		num2 = num3;
		num3 = temp;
	}

	return num3;
}

int main()
{
	cout << tribonacci(5);
}