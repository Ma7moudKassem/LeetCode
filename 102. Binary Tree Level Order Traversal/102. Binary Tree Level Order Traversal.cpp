#include <iostream>
#include <vector>
#include <queue>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

vector<vector<int>> levelOrder(TreeNode* root) {

	vector<vector<int>> result;

	if (!root)
		result;

	queue<TreeNode*> q;

	q.push(root);

	while (!q.empty())
	{
		int n = q.size();
		vector<int> temp;

		for (int i = 0; i < n; i++)
		{
			TreeNode* current = q.front();
			q.pop();

			if (current->left) q.push(current->left);
			if (current->right) q.push(current->right);

			temp.push_back(current->val);
		}

		result.push_back(temp);
	}

	return result;
}

int main()
{
}