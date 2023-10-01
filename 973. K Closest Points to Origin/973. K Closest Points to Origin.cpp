#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

	vector<vector<int>> ans;
	priority_queue<pair<double, vector<int>>> heap;

	for (auto point : points)
		heap.push({ -(sqrt(pow(point[0] - 0,2) + pow(point[1] - 0,2))) ,point });

	while (k > 0)
	{
		ans.push_back(heap.top().second);
		heap.pop();
		k--;
	}

	return ans;
}

int main()
{
}