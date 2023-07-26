#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

	ListNode* ans = new ListNode(0);
	ListNode* current = ans;

	int carry = 0;

	while (l1 || l2 || carry != 0)
	{
		int n1 = l1 ? l1->val : 0;
		int n2 = l2 ? l2->val : 0;

		int sum = n1 + n2 + carry;

		carry = sum / 10;

		current->next = new ListNode(sum % 10);

		l1 = l1->next ? l1->next : nullptr;
		l2 = l2->next ? l2->next : nullptr;
		current = current->next ? current->next : nullptr;
	}

	return ans->next;
}


int main()
{
	// 2->4->3       5->6->4 --> 801
	ListNode* l1 = new ListNode(2);
	ListNode* l2 = new ListNode(4);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(5);
	ListNode* l5 = new ListNode(6);
	ListNode* l6 = new ListNode(4);

	l1->next = l2;
	l2->next = l3;

	l4->next = l5;
	l5->next = l6;

	ListNode* m = addTwoNumbers(l1, l4);
}