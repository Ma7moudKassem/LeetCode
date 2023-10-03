#include <iostream>
#include <vector>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
	int ans = 0;

	for (int hour : hours)
		if (hour >= target)
			ans++;

	return ans;
}

int main()
{

}