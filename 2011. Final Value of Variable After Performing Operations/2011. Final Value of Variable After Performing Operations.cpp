#include <iostream>
#include <vector>
#include <vector>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {

	int x = 0;

	for (auto operation : operations)
		operation == "--X" || operation == "X--" ? x-- : x++;

	return x;
}

int main()
{
}