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

int higth(TreeNode* root)
{
	if (!root)
		return 0;

	return max(higth(root->left), higth(root->right)) + 1;
}

int sum = INT_MIN;
int BFS(TreeNode* root, int level)
{
	if (!root)
		return sum;

	if (level == 0)
		sum += root->val;
	else
	{
		BFS(root->right, level - 1);
		BFS(root->left, level - 1);
	}
}

int maxLevelSum(TreeNode* root) {

	int h = higth(root);

	int maxSum = INT_MIN;
	int level = 0;
	for (int i = 0; i < h; i++)
	{
		sum = 0;
		int sum = BFS(root, i);
		if (sum > maxSum)
		{
			maxSum = sum;
			level = i + 1;
		}
	}

	return level;
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

	node1->right = node3;
	node1->left = node2;

	node3->right = node4;
	node2->right = node5;

	int c = maxLevelSum(node1);
}
