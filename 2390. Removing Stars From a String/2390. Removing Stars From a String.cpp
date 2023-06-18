#include <iostream>
#include <vector>
#include <stack>
using namespace std;

string removeStars(string s) {
	int count = 0;
	string str = "";
	reverse(s.begin(), s.end());

	for (char c : s)
	{
		if (c == '*')
			count++;
		else
		{
			if (count > 0)
				count--;
			else
			{
				str.push_back(c);
			}
		}

	}

	reverse(str.begin(), str.end());

	return str;
}

int main()
{
	removeStars("erase*****");
	//e*doc**teel
}