#include <iostream>
#include <numeric>
using namespace std;

string gcdOfStrings(string str1, string str2) {

	if (str1 + str2 == str2 + str1)
	{
		return str1.substr(0, gcd(size(str1), size(str2)));
	}

	return "";
}

//ABABAB 
int main()
{
	auto c = gcdOfStrings("LEET", "CODE");

	cout << c;
}