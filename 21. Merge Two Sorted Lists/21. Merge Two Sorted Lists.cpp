#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

	if (!list1)
		return list2;
	if (!list2)
		return list1;

	if (list1 < list2)
	{
		list1->next = mergeTwoLists(list1->next, list2);
		return list1;
	}
	else
	{
		list2->next = mergeTwoLists(list1, list2->next);
		return list2;
	}
}

int main()
{
	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	ListNode* node4 = new ListNode(4);
	ListNode* node1_1 = new ListNode(1);
	ListNode* node3 = new ListNode(3);
	ListNode* node4_1 = new ListNode(4);

	node1->next = node2;
	node2->next = node4;

	node1_1->next = node3;
	node3->next = node4_1;

	mergeTwoLists(node1, node1_1);
}