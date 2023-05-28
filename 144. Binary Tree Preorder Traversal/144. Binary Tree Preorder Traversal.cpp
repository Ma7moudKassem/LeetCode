#include <iostream>
#include <Vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

void dfs(TreeNode* root, vector<int>& arr)
{
	if (root == NULL)
		return;

	arr.push_back(root->val);
	dfs(root->left, arr);
	dfs(root->right, arr);
}

vector<int> preorderTraversal(TreeNode* root) {

	vector<int> arr;
	dfs(root, arr);

	return arr;
}

int main()
{
}
