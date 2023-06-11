#include <iostream>
using namespace std;

string reversePrefix(string word, char ch) {
	int j = 0, i = 0;

	while (i < word.size())
	{
		if (word[i] == ch)
			break;

		i++;
	}

	if (i >= word.size())
		return word;

	while (j < i)
	{
		char temp;

		temp = word[j];

		word[j] = word[i];
		word[i] = temp;

		j++;
		i--;
	}

	return word;
}
int main()
{
	//modykassem
	//kydomassem
	cout << reversePrefix("abcd", 'z');
}