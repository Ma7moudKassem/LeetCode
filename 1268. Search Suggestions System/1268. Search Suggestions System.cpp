#include <iostream>
#include <vector>
using namespace std;

class TrieNode
{
public:
	TrieNode* children[26];
	bool isEnd;
};

TrieNode* root = new TrieNode();
TrieNode* newChild()
{
	TrieNode* node = new TrieNode();

	for (int i = 0; i < 26; i++)
	{
		node->children[i] = NULL;

		node = node->children[i];
	}

	node->isEnd = false;

	return node;
}

void insert(string word)
{
	TrieNode* node = root;

	for (int i = 0; i < word.size(); i++)
	{
		int idx = word[i] - 'a';

		if (!node->children[idx])
			node->children[idx] = newChild();

		node = node->children[idx];
	}

	node->isEnd = true;
}


void dfs(TrieNode* curr, string& word, vector<string>& result)
{
	if (result.size() == 3)
		return;

	if (curr->isEnd)
		result.push_back(word);

	for (char c = 'a'; c <= 'z'; c++)
	{
		if (curr->children[c - 'a'])
		{
			word += c;
			dfs(curr->children[c - 'a'], word, result);
			word.pop_back();
		}
	}
}

vector<string> getWordsByPrefix(string& prifex)
{
	TrieNode* node = root;
	vector<string> result;


	for (int i = 0; i < prifex.size(); i++)
	{
		if (!node->children[prifex[i] - 'a'])
			return result;

		node = node->children[prifex[i] - 'a'];
	}

	dfs(node, prifex, result);

	return result;
}
vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {

	vector<vector<string>> ans;

	for (auto product : products)
		insert(product);

	string prifx = "";
	for (char c : searchWord)
	{
		prifx += c;

		ans.push_back(getWordsByPrefix(prifx));
	}

	return ans;
}

int main()
{
}