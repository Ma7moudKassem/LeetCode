#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string s)
{
	vector<string> splitedWords;
	string word;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ' && i != s.size() - 1)
			word.push_back(s[i]);
		else if (s[i] == ' ')
		{
			splitedWords.push_back(word);
			word = "";
		}
		else if (i == s.size() - 1)
		{
			word.push_back(s[i]);
			splitedWords.push_back(word);
		}
	}
	return splitedWords;
}

string reverseWords(string s)
{
	vector<string> words = split(s);
	string result;
	for (auto n : words)
	{
		reverse(n.begin(), n.end());
		result += n + ' ';
	}
	result.pop_back();
	return result;
}

int main()
{
	cout << reverseWords("Kassem ElGamed Gedan");
}
