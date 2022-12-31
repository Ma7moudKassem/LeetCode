#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s)
{
	int first = 0, last = s.size() - 1;

	reverse(s.begin(), s.end());
}

int main()
{
	vector<char> s = { 'a' , 'b' , 'c' };

	reverseString(s);
}