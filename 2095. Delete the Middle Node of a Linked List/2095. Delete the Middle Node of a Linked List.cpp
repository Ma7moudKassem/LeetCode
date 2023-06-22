#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* deleteMiddle(ListNode* head)
{
	if (head == nullptr)
		return nullptr;
	if (head->next == nullptr)
	{
		delete head;
		return NULL;
	}
	ListNode* temp = head;
	int length = 0;
	while (temp != nullptr)
	{
		length++;
		temp = temp->next;
	}

	int mid = length / 2;

	auto result = head;
	while (mid-- > 1)
		head = head->next;

	head->next = head->next->next;

	return result;
}

int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4);
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;

	deleteMiddle(l1);
}