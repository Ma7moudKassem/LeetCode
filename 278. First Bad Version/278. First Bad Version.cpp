#include <iostream>
using namespace std;

bool isBadVersion(int version)
{
	// API Defined
}

// binary search;
int firstBadVersion(int n) {
	int left = 1, right = n;

	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (isBadVersion(mid))
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}

int main()
{
}