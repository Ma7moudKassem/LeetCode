#include <iostream>
#include <stack>
using namespace std;

class Trie {
public:
	stack<string> data;
	Trie() {

	}

	void insert(string word) {
		data.push(word);
	}

	bool search(string word) {
		stack<string> temp = data;

		if (temp.size())
		{
			while (temp.size())
			{
				if (temp.top() == word)
					return true;

				temp.pop();
			}
		}

		return false;
	}

	bool startsWith(string prefix) {
		if (data.size())
		{
			string first = data.top();

			if (prefix.size() > first.size())
				return false;

			for (int i = 0; i < first.size(); i++)
				if (first[i] != prefix[i])
					return false;

			return true;
		}

		return false;
	}
};


int main()
{
	Trie* obj = new Trie();
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
	bool param_4 = obj->startsWith("ac");
}