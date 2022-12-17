#include <iostream>
#include <vector>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	vector<int> intersectedArr;
	int i = 0;
	while (i < nums1.size())
	{
		for (int j = 0; j < nums2.size(); j++)
		{
			if (nums1[i] == nums2[j])
			{
				intersectedArr.push_back(nums1[i]);
				if ((nums2.size() == 1) || (i == nums2.size()-1))
					return intersectedArr;

				break;
			}
		}
		i++;
	}
	return intersectedArr;
}

int main()
{
	vector<int> arr1 = { 1,2,1,2};
	vector<int> arr2 = { 1,2 };
	vector<int> inte = intersect(arr1, arr2);
}
