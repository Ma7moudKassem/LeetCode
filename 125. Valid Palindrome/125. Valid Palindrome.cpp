#include <iostream>

using namespace std;


bool isPalindrome(string s) {

	string sTolower;
	for (auto c : s)
	{
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
			sTolower.push_back(tolower(c));
	}

	string revString = sTolower;
	reverse(revString.begin(), revString.end());
	return sTolower == revString;
}

int main()
{
	cout << isPalindrome("0P");
}
