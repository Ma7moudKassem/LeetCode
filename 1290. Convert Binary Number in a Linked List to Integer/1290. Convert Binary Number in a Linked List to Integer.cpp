#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

int getDecimalValue(ListNode* head)
{
	int value = head->val;
	while (head->next != NULL)
	{
		value = value * 2 + head->next->val;
		head = head->next;
	}
	return value;
}

int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(0);
	ListNode* l3 = new ListNode(1);
	l1->next = l2;
	l2->next = l3;

	int i = getDecimalValue(l1);
}