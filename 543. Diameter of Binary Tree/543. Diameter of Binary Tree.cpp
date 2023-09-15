#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};
unordered_map<int, int> dp;

int hight(TreeNode* root)
{
	if (!root)
		return 0;

	return max(hight(root->left), hight(root->right)) + 1;

}

int diameterOfBinaryTree(TreeNode* root) {
	if (!root)
		return 0;

	int rootHight = hight(root->left) + hight(root->right);

	int diameterOfBinaryTreeLeft = diameterOfBinaryTree(root->left);
	int diameterOfBinaryTreeRight = diameterOfBinaryTree(root->right);

	return max(rootHight, max(diameterOfBinaryTreeLeft, diameterOfBinaryTreeRight));
}

int main()
{
}