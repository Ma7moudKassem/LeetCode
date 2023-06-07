#include <iostream>j
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int compress(vector<char>& chars) {

	int i = 0, j = 0;

	while (i < chars.size())
	{
		int count = 1;

		while (i + count < chars.size() && chars[i + count] == chars[i])
			count++;

		chars[j++] = chars[i];

		if (count > 1)
			for (char c : to_string(count))
				chars[j++] = c;

		i += count;
	}

	return j;
}

int main()
{
	vector<char> ch = { 'a','a','b','b','c','c','c' };

	cout << compress(ch);
}
