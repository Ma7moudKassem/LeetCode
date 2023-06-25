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
int ans = 0;
void DFS(TreeNode* root, bool isRight, int path)
{
	if (!root)
		return;

	ans = max(ans, path);

	DFS(root->left, false, isRight ? path + 1 : 1);
	DFS(root->right, true, isRight ? 1 : path + 1);
}

int longestZigZag(TreeNode* root) {

	DFS(root, false, 0);
	DFS(root, true, 0);

	return ans;
}

int main()
{
}