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

TreeNode* deleteNode(TreeNode* root, int key) {

	if (!root)
		return NULL;

	if (root->val > key)
		root->left = deleteNode(root->left, key);
	else if (root->val < key)
		root->right = deleteNode(root->right, key);
	else
	{
		if (!root->left && !root->right)
			return NULL;
		else if (!root->left || !root->right)
			return root->left ? root->left : root->right;
		else
		{
			TreeNode* temp = root->left;
			while (temp->right)
				temp = temp->right;

			root->val = temp->val;
			root->left = deleteNode(root->left, key);
		}
	}

	return root;
}

int main()
{
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(3);
	TreeNode* node4 = new TreeNode(4);
	TreeNode* node5 = new TreeNode(5);
	TreeNode* node6 = new TreeNode(6);
	TreeNode* node7 = new TreeNode(7);

	node5->right = node6;
	node6->right = node7;

	node5->left = node3;
	node3->right = node4;
	node3->left = node2;

	deleteNode(node5, 3);
}