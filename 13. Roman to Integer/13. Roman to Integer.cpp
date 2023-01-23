#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
	int result = 0;
	unordered_map<char, int> map
	{
		{'I' , 1},{'V' , 5},{'X' , 10},{'L' , 50},{'C' , 100},{'D' , 500},{'M' , 1000},
	};

	for (int i = 0; i < s.size(); i++)
	{
		if (map[s[i]] < map[s[i + 1]])
			result = result - map[s[i]];
		else
			result = result + map[s[i]];
	}
	return result;
}

int main()
{
	cout << romanToInt("MCMXCIV");
}