#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void deletion(ListNode* list1, ListNode* list2, int a, int b)
{
	ListNode* result = list1;

	if (!list1)
		return;
	int index = 0;
	while (index != b)
	{
		result = result->next;
		index++;
	}

	ListNode* temp = result->next;

	index = 0;
	while (index != a)
	{
		list1 = list1->next;
		index++;
	}

	list1->next = list2;

	while (list1->next)
		list1 = list1->next;

	list1->next = temp;
}

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

	deletion(list1, list2, a, b);

	return list1;
}

int main()
{
	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	ListNode* node3 = new ListNode(3);
	ListNode* node4 = new ListNode(4);
	ListNode* node5 = new ListNode(5);
	ListNode* node7 = new ListNode(7);
	ListNode* node8 = new ListNode(8);
	ListNode* node9 = new ListNode(9);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;

	node7->next = node8;
	node8->next = node9;

	mergeInBetween(node1, 2, 4, node7);
}