#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val)
{

	if (head == NULL) return NULL;
	if (head->val == val)
		return removeElements(head->next, val);

	head->next = removeElements(head->next, val);

	return head;
}


int main()
{
	ListNode* node_3 = new ListNode(3);
	ListNode* node_2 = new ListNode(2);
	ListNode* node_0 = new ListNode(0);
	ListNode* node_4 = new ListNode(-4);

	node_3->next = node_2;
	node_2->next = node_0;
	node_0->next = node_4;

	removeElements(node_3, -4);
}
