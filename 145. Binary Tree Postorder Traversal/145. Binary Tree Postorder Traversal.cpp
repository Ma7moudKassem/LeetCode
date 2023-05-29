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
	if (root == NULL) return;

	dfs(root->left, arr);
	dfs(root->right, arr);
	arr.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {

	vector<int> ans;

	dfs(root, ans);

	return ans;
}

int main()
{
}
