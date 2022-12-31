#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* fast = head;
	ListNode* slow = head;

	while (n)
	{
		fast = fast->next;
		n--;
	}
	if (fast == NULL)
	{
		head = head->next;
		return head;
	}
	while (fast->next)
	{
		fast = fast->next;
		slow = slow->next;
	}
	if (slow->next && slow->next->next) {
		slow->next = slow->next->next;
	}
	else {
		slow->next = NULL;
	}
	return head;
}


int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4);
	ListNode* l5 = new ListNode(5);
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	l4->next = l5;

	ListNode* m = removeNthFromEnd(l1, 2);
}