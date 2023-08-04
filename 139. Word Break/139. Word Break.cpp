#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <queue>
using namespace std;

class TrieNode
{
public:
	TrieNode* children[26];
	bool isEnd;
};

TrieNode* root = new TrieNode();

TrieNode* newNode()
{
	TrieNode* node = new TrieNode();

	node->isEnd = false;

	for (int i = 0; i < 26; i++)
		node->children[i] = NULL;

	return node;
}

void insert(string word)
{
	TrieNode* node = root;

	for (int i = 0; i < word.size(); i++)
	{
		int idx = word[i] - 'a';
		if (!node->children[idx])
			node->children[idx] = newNode();

		node = node->children[idx];
	}

	node->isEnd = true;
}

bool find(string word)
{

	unordered_map<int, bool> dp(word.length());

	for (int i = 0; i < word.size(); i++)
	{
		if (i == 0 || dp[i - 1])
		{
			TrieNode* node = root;
			for (int j = i; j < word.length(); j++)
			{
				int idx = word[j] - 'a';

				if (!node->children[idx])
					break;

				node = node->children[idx];

				if (node->isEnd)
					dp[j] = true;
			}
		}
	}


	return dp[word.length() - 1];
}

bool wordBreak(string s, vector<string>& wordDict) {

	for (auto word : wordDict)
		insert(word);

	return find(s);
}

int main()
{
	vector<string> arr = { "aaaa","aaa" };

	cout << wordBreak("aaaaaaa", arr);
}