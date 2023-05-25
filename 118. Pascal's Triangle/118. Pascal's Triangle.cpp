#include <iostream>
#include <Vector>

using namespace std;


vector<int> sumSeqArr(vector<int> arr)
{
	vector<int> ans;

	for (int i = 0; i < arr.size() - 1; i++)
		ans.push_back((arr[i] + arr[i + 1]));

	return ans;
}

vector<vector<int>> generate(int numRows)
{
	if (numRows == NULL || numRows == 0)
	{
		return {};
	}
	vector<int> row;
	vector<vector<int>> ans;

	for (int i = 1; i <= numRows; i++)
	{
		switch (i)
		{
		case 1:
			row.push_back(1);
			ans.push_back(row);
			break;

		case 2:
			row.push_back(1);
			ans.push_back(row);
			break;

		default:
		{
			row = {};
			row.push_back(1);
			vector<int> sum = sumSeqArr(ans[i - 2]);
			for (int i = 0; i < sum.size(); i++)
				row.push_back(sum[i]);
			row.push_back(1);
			ans.push_back(row);
			break;
		}
		}
	}

	return ans;
}



//[1,2,3,4,5]-> [3,5,7,9]
int main()
{
	generate(4);
}