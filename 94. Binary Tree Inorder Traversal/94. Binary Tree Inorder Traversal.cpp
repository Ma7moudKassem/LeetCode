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


// using recursion DFS
void dfs(TreeNode* root, vector<int>& ans)
{
	if (root == NULL)
		return;

	dfs(root->left, ans);
	ans.push_back(root->val);
	dfs(root->right, ans);
}

vector<int> inorderTraversal(TreeNode* root) {
	vector<int> ans;
	dfs(root, ans);

	return ans;
}

int main()
{
	TreeNode* root = new TreeNode(2);
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node3 = new TreeNode(3);

	root->left = node1;
	root->right = node3;

	inorderTraversal(root);
}

