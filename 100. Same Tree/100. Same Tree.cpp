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

bool isSameTree(TreeNode* p, TreeNode* q)
{
	if (p == nullptr && q == nullptr)
		return true;
	else if (p == nullptr || q == nullptr)
		return false;
	else if (p->val != q->val)
		return false;
	else
	{
		bool rigth = isSameTree(p->right, q->right);
		bool left = isSameTree(p->left, q->left);

		return(rigth && left);
	}
}

int main()
{
	TreeNode* node1 = new TreeNode(1);
	TreeNode* node1_1 = new TreeNode(1);
	TreeNode* node2 = new TreeNode(2);

	node2->left = node1;
	node2->right = node1_1;

	TreeNode* nod1 = new TreeNode(1);
	TreeNode* nod1_1 = new TreeNode(1);
	TreeNode* nod2 = new TreeNode(2);

	nod1->right = nod2;
	nod1->left = nod1_1;

	isSameTree(node2, nod1);
}