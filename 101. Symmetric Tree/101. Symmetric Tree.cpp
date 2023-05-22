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

bool dfs(TreeNode* left, TreeNode* rigth)
{
	if (left == NULL && rigth == NULL)
		return true;
	else if (left == NULL || rigth == NULL)
		return false;

	return left->val == rigth->val &&
		dfs(left->left, rigth->right) &&
		dfs(left->right, rigth->left);
}

bool isSymmetric(TreeNode* root) {

	return dfs(root->left, root->right);
}


int main()
{
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node1_1 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);

	node2->left = node1;
	node2->right = node1_1;

	cout << isSymmetric(node2);
}

