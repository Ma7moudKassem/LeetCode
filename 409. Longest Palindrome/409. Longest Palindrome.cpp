#include <iostream>
#include <vector>
using namespace std;

int longestPalindrome(string s) {
	vector<int> arr(128);

	for (auto c : s)
		arr[c]++;

	int ans = 0;
	for (auto c : arr)
	{
		ans += c / 2 * 2;

		if (ans % 2 == 0 && c % 2 == 1)
			ans++;
	}

	return ans;
}

int main()
{
	cout << longestPalindrome("abccccdd");
}