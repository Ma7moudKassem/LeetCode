#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
//1-2-3-4-5
ListNode* oddEvenList(ListNode* head) {

	if (head == NULL)
		return NULL;

	ListNode* even = head->next;
	ListNode* odd = head;
	ListNode* even_head = even;

	while (even && even->next)
	{
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}

	odd->next = even_head;

	return head;
}

int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4);
	ListNode* l5 = new ListNode(5);
	ListNode* l6 = new ListNode(6);
	ListNode* l7 = new ListNode(7);
	ListNode* l8 = new ListNode(8);
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	l4->next = l5;
	l5->next = l6;
	l6->next = l7;
	l7->next = l8;
	oddEvenList(l1);
}