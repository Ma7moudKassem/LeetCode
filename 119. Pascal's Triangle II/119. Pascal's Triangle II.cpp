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

vector<int> getRow(int rowIndex) {
	vector<int> row;
	vector<vector<int>> ans;

	for (int i = 0; i < rowIndex; i++)
	{
		switch (i)
		{
		case 0:
			row.push_back(1);
			break;

		case 1:
			row.push_back(1);
			break;

		default:
		{
			row = {};
			row.push_back(1);
			vector<int> sum = sumSeqArr(ans[i - 1]);
			for (int i = 0; i < sum.size(); i++)
				row.push_back(sum[i]);
			row.push_back(1);
			break;
		}
		}
	}

	return row;
}

int main()
{
}
