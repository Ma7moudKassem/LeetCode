#include <iostream>
#include <stack>
using namespace std;

class TrieNode
{
public:
	TrieNode* children[26];
	bool isEnd;
};

class Trie {
public:
	Trie() {

	}

	TrieNode* data = new TrieNode();

private:
	TrieNode* newChild()
	{
		TrieNode* node = new TrieNode();

		for (int i = 0; i < 26; i++)
			node->children[i] = NULL;

		node->isEnd = false;

		return node;
	}

public:
	void insert(string word) {
		TrieNode* node = data;

		for (int i = 0; i < word.size(); i++)
		{
			int idx = word[i] - 'a';

			if (!node->children[idx])
				node->children[idx] = newChild();

			node = node->children[idx];
		}

		node->isEnd = true;
	}

	bool search(string word) {
		TrieNode* node = data;

		for (int i = 0; i < word.size(); i++)
		{
			int idx = word[i] - 'a';

			if (!node->children[idx])
				return false;

			node = node->children[idx];
		}

		return node->isEnd;
	}

	bool startsWith(string prefix) {
		TrieNode* node = data;

		for (int i = 0; i < prefix.size(); i++)
		{
			int idx = prefix[i] - 'a';

			if (!node->children[idx])
				return false;

			node = node->children[idx];
		}

		return true;
	}
};

int main()
{
	/*Trie* obj = new Trie();
	obj->insert("ab");
	bool param_5 = obj->search("abc");
	bool param_6 = obj->search("ab");
	bool param_3 = obj->startsWith("abc");
	bool param_1 = obj->startsWith("ab");
	obj->insert("ab");
	bool param_7 = obj->search("abc");
	bool param_2 = obj->startsWith("abc");
	obj->insert("abc");
	bool param_8 = obj->search("abc");
	bool param_4 = obj->startsWith("ac");*/

}