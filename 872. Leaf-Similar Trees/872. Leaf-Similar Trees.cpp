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

void leaf_values(TreeNode* root, vector<int>& arr)
{
	if (root == nullptr)
		return;
	if (root->right == nullptr && root->left == nullptr)
		arr.push_back(root->val);

	leaf_values(root->left, arr);
	leaf_values(root->right, arr);
}
bool leafSimilar(TreeNode* root1, TreeNode* root2) {
	vector<int> arr_rigth;
	vector<int> arr_left;

	leaf_values(root1, arr_left);
	leaf_values(root2, arr_rigth);

	return arr_left == arr_rigth;
}
int main()
{
	TreeNode* node1 = new TreeNode(1);
	//TreeNode* node1_1 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);

	node1->left = node2;
	//node2->right = node1_1;

	TreeNode* nod1 = new TreeNode(2);
	//TreeNode* nod1_1 = new TreeNode(1);
	TreeNode* nod2 = new TreeNode(2);

	//nod1->left = nod1_1;
	nod1->left = nod2;

	leafSimilar(node1, nod1);
}