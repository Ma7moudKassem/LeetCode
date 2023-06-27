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

void DFS(TreeNode* root, vector<int>& arr, int level, int* nextLevel)
{
	if (!root)
		return;
	if (*nextLevel < level)
	{
		arr.push_back(root->val);
		*nextLevel = level;
	}

	DFS(root->right, arr, level + 1, nextLevel);
	DFS(root->left, arr, level + 1, nextLevel);
}
vector<int> rightSideView(TreeNode* root) {
	vector<int> ans;

	int nextLevel = 0;
	DFS(root, ans, 1, &nextLevel);

	return ans;
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

	rightSideView(node1);
}