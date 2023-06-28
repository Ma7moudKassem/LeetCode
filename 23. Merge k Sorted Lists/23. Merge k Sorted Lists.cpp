#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void Push(ListNode** root, int item)
{
	ListNode* temp = new ListNode;
	ListNode* ptr;
	temp->val = item;
	temp->next = NULL;

	if (*root == NULL)
		*root = temp;
	else {
		ptr = *root;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
	vector<int> sortedArr;

	for (auto list : lists)
	{
		while (list)
		{
			sortedArr.push_back(list->val);
			list = list->next;
		}
	}

	sort(sortedArr.begin(), sortedArr.end());

	ListNode* ans = NULL;

	for (auto n : sortedArr)
		Push(&ans, n);

	return ans;
}

int main()
{
}
