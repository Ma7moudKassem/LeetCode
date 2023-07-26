#include <iostream>
using namespace std;

bool isStrictlyPalindromic(int n) {
	for (int k = 1; k <= n; k++)
	{
		int i = k, j = n;

		while (i < j)
		{
			if ((i & 1) != (j & 1))
				return false;

			j--;
			i++;
		}
	}

	return true;
}

int main()
{
}