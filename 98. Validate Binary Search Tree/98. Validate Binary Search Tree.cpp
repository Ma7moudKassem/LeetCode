#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

bool DFS(TreeNode* root, TreeNode* min, TreeNode* max)
{
	if (!root)
		return true;

	if ((!min || root->val > min->val) && (!max || root->val < max->val))
		return DFS(root->left, min, root) && DFS(root->right, root, max);

	return false;
}

bool isValidBST(TreeNode* root) {

	return DFS(root, NULL, NULL);
}

int main()
{
	TreeNode* node1 = new TreeNode(-1);
	TreeNode* node2 = new TreeNode(0);
	TreeNode* node3 = new TreeNode(3);

	//node2->right = node3;
	node2->left = node1;

	cout << isValidBST(node2);
}