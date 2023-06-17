#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

bool closeStrings(string word1, string word2) {
	if (word1.size() != word2.size())
		return false;

	set<char> set1, set2;
	vector<int> arr1(26, 0), arr2(26, 0);

	for (int i = 0; i < word1.size(); i++)
	{
		set1.insert(word1[i]);
		set2.insert(word2[i]);

		arr1[word1[i] - 'a']++;
		arr2[word2[i] - 'a']++;
	}

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	return set1 == set2 && arr1 == arr2;
}

int main()
{
	closeStrings("cabbba", "abbccc");
}