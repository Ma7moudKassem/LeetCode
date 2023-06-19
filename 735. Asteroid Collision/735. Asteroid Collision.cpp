#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {

	vector<int> arr;
	for (int a : asteroids)
	{
		bool isDistoryed = false;
		if (arr.size() && arr.back() > 0 && a < 0 && !isDistoryed)
		{
			if (arr.back() <= a)
				arr.pop_back();
			if (arr.back() >= a)
				isDistoryed = true;
		}

		if (!isDistoryed)
			arr.push_back(a);
	}

	return arr;
}

int main()
{
	vector<int> arr = { 5,10,-5 };
	asteroidCollision(arr);
}