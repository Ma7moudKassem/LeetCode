#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string sentence)
{
	string word = "";
	vector<string> words;
	int count = 0;

	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] != ' ')
			word += sentence[i];
		else
		{
			words.push_back(word);
			word = "";
		}
	}
	words.push_back(word);
	return words;
}

bool isValid(string word)
{
	int hyphenCount = 0;
	int PunctuationCount = 0;

	if ((word[0] < 'a' || word[0] > 'z') && word.size() != 1)
		return false;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			continue;
		else if (word[i] >= '0' && word[i] <= '9')
			return false;
		else if (word[i] == '-')
		{
			if (i + 1 == word.size() || word[i + 1] < 'a' || word[i + 1] > 'z')
				return false;
			hyphenCount++;
		}
		else
		{
			if (i + 1 != word.size())
				return false;

			PunctuationCount++;
		}

		return hyphenCount <= 1 && PunctuationCount <= 1;
	}
}

int countValidWords(string sentence)
{
	int count = 0;
	for (string word : split(sentence))
	{
		if (isValid(word))
			count++;
	}

	return count;
}

int main()
{
	string str;

	cout << "Enter Statement :";
	cin >> str;

	cout << countValidWords(str);
}

