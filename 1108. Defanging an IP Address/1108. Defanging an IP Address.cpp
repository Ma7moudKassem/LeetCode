#include <iostream>
using namespace std;

string defangIPaddr(string address) {

	string result;
	for (auto n : address)
	{
		if (n == '.')
		{
			result.push_back('[');
			result.push_back('.');
			result.push_back(']');
		}
		else
			result.push_back(n);
	}
	return result;
}

int main()
{
	cout << defangIPaddr("1.1.1.1");
}
