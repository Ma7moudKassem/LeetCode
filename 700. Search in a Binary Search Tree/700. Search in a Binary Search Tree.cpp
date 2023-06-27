#include <iostream>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* searchBST(TreeNode* root, int val) {
	if (!root)
		return NULL;

	if (root->val == val)
		return root;

	if (val > root->val)
		return searchBST(root->right, val);
	else if (val < root->val)
		return searchBST(root->left, val);

	return root;
}

int main()
{
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(3);
	TreeNode* node4 = new TreeNode(4);
	TreeNode* node5 = new TreeNode(5);
	TreeNode* node6 = new TreeNode(6);
	TreeNode* node7 = new TreeNode(7);

	node4->right = node7;
	node4->left = node2;
	node2->left = node1;
	node2->right = node7;

	searchBST(node4, 2);
}