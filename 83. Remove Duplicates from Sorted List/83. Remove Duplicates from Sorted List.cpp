#include <iostream>
using namespace std;

#pragma region LinkedList
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
#pragma endregion

ListNode* deleteDuplicates(ListNode* head) {
	ListNode* ans = head;

	while (head->next != nullptr)
	{

		if (ans->val == ans->next->val)
		{
			ans->next = ans->next->next;
		}
		else
		{
			ans = ans->next;
		}
	}

	return head;
}

// 1->1->2->3->3

int main()
{
	ListNode* node1 = new ListNode(1);
	ListNode* node1_1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	ListNode* node3 = new ListNode(3);
	ListNode* node3_3 = new ListNode(3);

	node1->next = node1_1;
	node1_1->next = node2;
	node2->next = node3;
	node3->next = node3_3;

	deleteDuplicates(node1);
}