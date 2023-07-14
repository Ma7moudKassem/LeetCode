#include <iostream>
#include<vector>
#include <stack>

using namespace std;

void splitString(string s, string& ans)
{
	string word;
	stack<string> words;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
			word.push_back(s[i]);
		else
		{
			if (word != "" && word != " ")
				words.push(word);
			word = "";
		}
	}
	if (word != "" && word != " ")
		words.push(word);

	while (words.size() > 0)
	{
		ans += ans == "" ? ans += words.top() : " " + words.top();
		words.pop();
	}
}

string reverseWords(string s) {
	string ans;

	splitString(s, ans);

	return ans;
}

int main()
{
	cout << reverseWords("a good        example   lj k mkmkm     ");
}
