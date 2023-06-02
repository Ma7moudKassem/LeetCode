#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2) {

	int l = (word1 + word2).size();
	string ans;
	for (int i = 0; i < l; i++)
	{
		if (i < word1.size() && i < word2.size())
		{
			ans.push_back(word1[i]);
			ans.push_back(word2[i]);
		}
		else if (i < word1.size() && i >= word2.size())
		{
			ans.push_back(word1[i]);
		}
		else if (i >= word1.size() && i < word2.size())
		{
			ans.push_back(word2[i]);
		}
		else
		{
			break;
		}
	}
	return ans;
}

int main()
{
	mergeAlternately("abc", "pqr");
}