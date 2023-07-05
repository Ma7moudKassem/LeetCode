#include <iostream>
using namespace std;

int guess(int num)
{
	int peak = 6;

	return num > peak ? -1 : num < peak ? 1 : 0;
}

int guessNumber(int n) {
	int start = 1;
	int end = n;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (guess(mid) == 0)
			return mid;
		else if (guess(mid) == 1)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}

int main()
{
	cout << guessNumber(10);
}
