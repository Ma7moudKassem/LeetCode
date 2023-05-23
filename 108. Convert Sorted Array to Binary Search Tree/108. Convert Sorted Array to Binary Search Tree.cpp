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

TreeNode* recusive(vector<int>& nums, int left, int rigth)
{
	if (left > rigth) return NULL;

	int mid = left + (rigth - left) / 2;

	TreeNode* tree = new TreeNode(nums[mid]);

	tree->left = recusive(nums, left, mid - 1);
	tree->right = recusive(nums, mid + 1, rigth);

	return tree;
}

TreeNode* sortedArrayToBST(vector<int>& nums)
{
	int left = 0;
	int rigth = nums.size() - 1;

	return recusive(nums, left, rigth);
}

int main()
{
}

// [-10,-3,0,5,9] 