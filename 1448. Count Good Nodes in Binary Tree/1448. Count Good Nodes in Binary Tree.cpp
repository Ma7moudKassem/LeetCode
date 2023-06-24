#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

void DFS(TreeNode* root, int max, int& count)
{
	if (root == NULL)
		return;
	if (max <= root->val)
	{
		max = root->val;
		++count;
	}

	DFS(root->left, max, count);
	DFS(root->right, max, count);
}

int goodNodes(TreeNode* root) {
	int count = 0; int max = INT_MIN;

	DFS(root, max, count);

	return count;
}

int main()
{
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node11 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(3);
	TreeNode* node31 = new TreeNode(3);
	TreeNode* node4 = new TreeNode(4);
	TreeNode* node5 = new TreeNode(5);
	TreeNode* node6 = new TreeNode(6);
	TreeNode* node7 = new TreeNode(7);

	//node1->right = node3;
	//node3->left = node1;
	//node1->left = node31;

	//node3->right = node4;

	//node4->right = node5;
	//node4->left = node11;

	node6->right = node3;
	node3->left = node5;
	cout << goodNodes(node6);
}