#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head)
{
	ListNode* slow = head;
	ListNode* fast = head;
	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

int main()
{
	ListNode* l1 = new ListNode(2);
	ListNode* l2 = new ListNode(4);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(5);
	ListNode* l5 = new ListNode(6);
	ListNode* l6 = new ListNode(4);

	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	l4->next = l5;
	l5->next = l6;

	ListNode* m = middleNode(l1);
}