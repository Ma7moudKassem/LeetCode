#include <iostream>
#include<vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void DFS(string digits, unordered_map<char, string> sympols, string& temp, vector<string>& result, int index)
{
	if (index == digits.size())
	{
		result.push_back(temp);
		return;
	}

	string current = sympols[digits[index]];

	for (char s : current)
	{
		temp.push_back(s);
		DFS(digits, sympols, temp, result, index + 1);
		temp.pop_back();
	}
}

vector<string> letterCombinations(string digits) {
	if (digits == "")
		return {};

	unordered_map<char, string> sympols = {
		{'2',"abc"},
		{'3',"def"},
		{'4',"ghi"},
		{'5',"jkl"},
		{'6',"mno"},
		{'7',"pqrs"},
		{'8',"tuv"},
		{'9',"wxyz"}
	};

	vector<string> result;
	string temp;

	DFS(digits, sympols, temp, result, 0);

	return result;
}
int main()
{
	letterCombinations("23");
}
