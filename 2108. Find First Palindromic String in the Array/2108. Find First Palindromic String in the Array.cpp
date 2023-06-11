#include <iostream>
#include <vector>

using namespace std;

string firstPalindrome(vector<string>& words) {

	for (int i = 0; i < words.size(); i++)
	{
		string word = words[i];
		reverse(words[i].begin(), words[i].end());

		if (words[i] == word)
			return word;
	}

	return "";
}


int main()
{
}