#include <iostream>
#include <vector>
using namespace std;
// using Brute force o(n2)
//bool searchMatrix(vector<vector<int>>& matrix, int target) {
//
//	for (int i = 0; i < matrix[0].size(); i++)
//	{
//		for (int j = 0; j < matrix.size(); j++)
//		{
//			if (matrix[i][j] == target)
//				return true;
//		}
//	}
//
//	return false;
//}

bool searchMatrix(vector<vector<int>>& matrix, int target) {

	int n = matrix.size(),
		n1 = matrix[0].size(),
		start = 0,
		end = n * n1 - 1;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (matrix[mid / n1][mid % n1] == target)
			return true;
		else if (matrix[mid / n1][mid % n1] > target)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return false;
}

int main()
{
	vector<vector<int>> arr = { {1,3,5,7} ,{10,11,16,20},{23,30,34,60} };

	cout << searchMatrix(arr, 3);
}
