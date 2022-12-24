#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
	string num_to_str = to_string(x);
	string result;
	for (int i = (num_to_str.size() - 1); i >= 0; i--)
		result += num_to_str[i];

	return num_to_str == result;
}

int main()
{
	std::cout << isPalindrome(121);
}