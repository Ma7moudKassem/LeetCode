#include <iostream>
#include <cstdlib>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


int check(TreeNode* root, bool& balanced)
{
	if (root == NULL || !balanced)
		return 0;

	int leftDepth = check(root->left, balanced);
	int rigthDepth = check(root->right, balanced);

	if (abs(leftDepth - rigthDepth) > 1)
		balanced = false;

	return max(leftDepth, rigthDepth) + 1;
}


bool isBalanced(TreeNode* root) {

	bool balanced = true;

	check(root, balanced);

	return balanced;

}

int main()
{
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node1_1 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(2);
	TreeNode* node4 = new TreeNode(2);

	//node2->left = node1;
	//node2->right = node1_1;
	//node2->right = node3;
	//node3->right = node4;

	cout << isBalanced(node2);
}