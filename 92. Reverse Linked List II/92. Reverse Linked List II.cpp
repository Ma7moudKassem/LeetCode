#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}

};

ListNode* reverseBetween(ListNode* head, int left, int right) {
	ListNode* next;
	ListNode* prev = NULL;

	while (head)
	{
		if (head->val == left)
		{
			next = head->next;
			head->next = prev;
			head = next;
			prev = head;
		}
		else if (prev->val == right)
			return prev;

		head = head->next;
	}

	return prev;
}

int main()
{
}