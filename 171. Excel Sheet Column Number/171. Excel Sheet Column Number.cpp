#include <iostream>
using namespace std;


int titleToNumber(string columnTitle) {

	int ans = 0;
	for (auto n : columnTitle)
	{
		int d = n - 'A' + 1;
		ans = ans * 26 + d;
	}

	return ans;
}

int main()
{

}