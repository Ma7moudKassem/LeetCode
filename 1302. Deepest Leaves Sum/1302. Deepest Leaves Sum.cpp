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

int height(TreeNode* node)
{
	if (node == NULL)
		return 0;
	else
	{
		int left_height = height(node->left);
		int right_height = height(node->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}

int sumOfDeepestValue(TreeNode* root, int level)
{
	if (root == NULL)
		return 0;
	if (level == 1)
		return root->val;
	else if (level > 1)
	{
		return (sumOfDeepestValue(root->left, level - 1) + sumOfDeepestValue(root->right, level - 1));
	}
}

int deepestLeavesSum(TreeNode* root)
{
	int h = height(root);

	return sumOfDeepestValue(root, h);
}

int main()
{
#pragma region BuildTree

	TreeNode* tree6 = new TreeNode(6);
	TreeNode* tree7 = new TreeNode(7);
	TreeNode* tree8 = new TreeNode(8);
	TreeNode* tree2 = new TreeNode(2);
	TreeNode* tree7_1 = new TreeNode(7);
	TreeNode* tree1 = new TreeNode(1);
	TreeNode* tree1_1 = new TreeNode(1);
	TreeNode* tree3 = new TreeNode(3);
	TreeNode* tree4 = new TreeNode(4);
	TreeNode* tree5 = new TreeNode(5);
	TreeNode* tree9 = new TreeNode(9);

	tree6->right = tree8;
	tree6->left = tree7;

	tree7->left = tree2;
	tree7->right = tree7_1;

	tree2->left = tree9;

	tree7_1->right = tree4;
	tree7_1->left = tree1;


	tree8->right = tree3;
	tree8->left = tree1_1;

	tree3->right = tree5;

#pragma endregion

	cout << deepestLeavesSum(tree6);
}
