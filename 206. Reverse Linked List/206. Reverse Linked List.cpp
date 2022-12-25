#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head)
{
	ListNode* current = head, * temp = 0, * previus = 0;
	while (current)
	{
		temp = current->next;
		current->next = previus;
		previus = current;
		current = temp;
	}
	return previus;
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

	cout << reverseList(l1);
}
