#include <iostream>
#include <unordered_map>
using namespace std;


struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode* head) {
	unordered_map<ListNode*, int> m;
	ListNode* temp = head;
	while (temp != NULL) {
		m[temp]++;

		if (m[temp] > 1)
			return true;

		temp = temp->next;
	}
	return false;
}

//[3, 2, 0, -4]

int main()
{
	ListNode* node_3 = new ListNode(3);
	ListNode* node_2 = new ListNode(2);
	ListNode* node_0 = new ListNode(0);
	ListNode* node_4 = new ListNode(-4);

	node_3->next = node_2;
	node_2->next = node_0;
	node_0->next = node_4;
	node_4->next = node_2;

	hasCycle(node_3);
}