#include <iostream>
#include <vector>
using namespace std;

// 1,2,3,4,5,6,7

//7,6,5,4,3,2,1
//5,6,7,4,3,2,1
//4,3,2,1,7,6,5


void rotate(vector<int>& nums, int k)
{
	k %= nums.size();
	reverse(nums.begin(), nums.end());
	reverse(nums.begin(), nums.begin() + k);
	reverse(nums.begin() + k, nums.end());
}


int main()
{
	vector<int> nums = { 1,2,3,4,5,6,7 }; 
	//vector<int> nums = { -1};
	rotate(nums, 3);

	//for (auto n : c)
	//	cout << n << " : ";
}