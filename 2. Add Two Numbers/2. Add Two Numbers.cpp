#include <iostream>
using namespace std;

struct LinkedList
{
	int val;
	LinkedList* next;
	LinkedList() : val(0), next(nullptr) {}
	LinkedList(int x) : val(x), next(nullptr) {}
	LinkedList(int x, LinkedList* next) : val(x), next(next) {}
};

LinkedList* addTwoNumbers(LinkedList* l1, LinkedList* l2)
{
	LinkedList* head = new LinkedList(0);
	LinkedList* current = head;
	int carry = 0;

	while (l1 != NULL || l2 != NULL || carry != 0)
	{
		int x = l1 ? l1->val : 0;
		int y = l2 ? l2->val : 0;
		int sum = x + y + carry;

		carry = sum / 10;

		current->next = new LinkedList(sum % 10);
		current = current->next;

		l1 = l1 ? l1->next : 0;
		l2 = l2 ? l2->next : 0;
	}
	return head->next;
};

int main()
{
	LinkedList* l1 = new LinkedList(2);
	LinkedList* l2 = new LinkedList(4);
	LinkedList* l3 = new LinkedList(3);

	LinkedList* l4 = new LinkedList(5);
	LinkedList* l5 = new LinkedList(6);
	LinkedList* l6 = new LinkedList(4);

	l1->next = l2;
	l2->next = l3;

	l4->next = l5;
	l5->next = l6;

	LinkedList* m = addTwoNumbers(l1, l4);
}