#include <iostream>
#include<vector>

using namespace std;

vector<string> splitString(string s)
{
	string word;
	vector<string> words;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
			word.push_back(s[i]);
		else
		{
			if (word != "" && word != " ")
				words.push_back(word);
			word = "";
		}
	}
	if (word != "" && word != " ")
		words.push_back(word);

	return words;
}

string reverseWords(string s) {
	string ans;
	vector<string> words = splitString(s);
	for (int i = splitString(s).size() - 1; i >= 0; i--)
	{
		if (i == 0)
			ans += words[i];
		else
		{
			ans += words[i];
			ans.push_back(' ');
		}
	}

	return ans;
}

int main()
{
	reverseWords("a good        example   lj k mkmkm     ");
}
