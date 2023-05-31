#include <iostream>
#include <unordered_map>
using namespace std;

string convertToTitle(int columnNumber) {

	string result;
	while (columnNumber--)
	{
		result.push_back(columnNumber % 26 + 'A');
		columnNumber /= 26;
	}
	reverse(result.begin(), result.end());

	return result;
}

int main()
{
	convertToTitle(26);
}