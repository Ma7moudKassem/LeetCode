#include <iostream>
using namespace std;

bool isVowel(char c)
{
	return
		c == 'a' || c == 'A' ||
		c == 'e' || c == 'E' ||
		c == 'i' || c == 'I' ||
		c == 'o' || c == 'O' ||
		c == 'u' || c == 'U';
}

string reverseVowels(string s) {

	string volwesInStr;

	for (int i = 0; i < s.size(); i++)
	{
		if (isVowel(s[i]))
			volwesInStr.push_back(s[i]);
	}

	reverse(volwesInStr.begin(), volwesInStr.end());

	int index = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isVowel(s[i]))
		{
			s[i] = volwesInStr[index];
			index++;
		}
	}

	return s;
}

//moneasogmk ---> oeao ---> oaeo

//monaesogmk
int main()
{
	cout << reverseVowels("0P");
}
