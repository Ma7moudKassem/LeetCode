#include <iostream>
#include <unordered_map>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

int result = 0;
void DFS(TreeNode* root, int targetSum)
{
	if (!root) return;

	if (root->val == targetSum)
		result++;

	DFS(root->left, targetSum - root->val);
	DFS(root->right, targetSum - root->val);
}

int pathSum(TreeNode* root, int targetSum) {

	if (root)
	{
		DFS(root, targetSum);
		pathSum(root->left, targetSum);
		pathSum(root->right, targetSum);
	}

	return result;
}

int main()
{
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);
	TreeNode* nodeMin2 = new TreeNode(-2);
	TreeNode* node3 = new TreeNode(3);
	TreeNode* node3_1 = new TreeNode(3);
	TreeNode* nodeMin3 = new TreeNode(-3);
	TreeNode* node5 = new TreeNode(5);
	TreeNode* node11 = new TreeNode(11);
	TreeNode* node10 = new TreeNode(10);

	node10->right = nodeMin3;
	node10->left = node5;

	node5->left = node3;
	node5->right = node2;

	node3->left = node3_1;
	node3->right = nodeMin2;

	node2->right = node1;

	nodeMin3->right = node11;

	cout << pathSum(node10, 8);
}