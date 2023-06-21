#include <iostream>
#include <stack>
using namespace std;

string decodeString(string s) {

	stack<int> nums;
	stack<string> strings;
	string result = "";
	int num = 0;

	for (char c : s)
	{
		if (isdigit(c))
			num = num * 10 + c - '0';
		else if (c >= 'a' && c <= 'z')
			result.push_back(c);
		else if (c == '[')
		{
			nums.push(num);
			strings.push(result);
			result = "";
			num = 0;
		}
		else if (c == ']')
		{
			string temp = result;
			int i = nums.top() - 1;
			while (i > 0)
			{
				result += temp;
				i--;
			}
			result = strings.top() + result;
			strings.pop();
			nums.pop();
		}
	}

	return result;
}

int main()
{
	cout << decodeString("127[a2[c]]");
}