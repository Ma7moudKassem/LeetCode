#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s)
{
	reverse(s.begin(), s.end());
}

int main()
{
	vector<char> s = { 'a' , 'b' , 'c' };

	reverseString(s);
}