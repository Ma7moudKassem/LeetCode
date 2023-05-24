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

bool hasPathSum(TreeNode* root, int targetSum) {
	if (root == NULL) return 0;

	if (root->left == NULL && root->right == NULL && root->val == targetSum)
		return true;

	bool left = hasPathSum(root->left, targetSum - root->val);
	bool rigth = hasPathSum(root->right, targetSum - root->val);

	return left || rigth;
}

int main()
{
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node1_1 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(2);
	TreeNode* node4 = new TreeNode(2);

	node2->left = node1;
	node2->right = node1_1;
	node1_1->right = node3;
	node3->right = node4;

	cout << hasPathSum(node2, 3);
}
