#include <iostream>
#include <unordered_map>
using namespace std;

int numberOfSubstrings(string s) {

	int i = 0, j = 0, count = 0, n = s.size();
	unordered_map<char, int> map;

	while (i < n)
	{
		map[s[i]]++;

		while (map['a'] && map['b'] && map['c'])
		{
			count += n - i;
			map[s[j]]--;
			j++;
		}
		i++;
	}

	return count;
}

int main()
{
	cout << numberOfSubstrings("abcabc");
}