#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (!root || root == p || root == q)
		return root;

	TreeNode* rigth = lowestCommonAncestor(root->right, p, q);
	TreeNode* left = lowestCommonAncestor(root->left, p, q);

	return !left ? rigth : !rigth ? left : root;
}

int main()
{
}