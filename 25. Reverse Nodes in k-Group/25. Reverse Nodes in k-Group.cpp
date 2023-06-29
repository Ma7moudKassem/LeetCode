#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void conToVector(ListNode* head, vector<int>& arr)
{
	while (head)
	{
		arr.push_back(head->val);
		head = head->next;
	}
}

void push(ListNode* head, int val)
{
	ListNode* node = new ListNode(val);

	if (!head)
	{
		head = node;
		return;
	}

	while (head->next)
		head = head->next;

	head->next = node;
}

ListNode* reverseKGroup(ListNode* head, int k) {
	vector<int> arr;
	conToVector(head, arr);

	int i = 0;
	while (i + k <= arr.size())
	{
		int j = i + k;

		reverse(arr.begin() + i, arr.begin() + j);
		i += k;
	}

	ListNode* result = new ListNode(arr[0]);

	for (int n : arr)
		push(result, n);

	return result;
}

int main()
{
	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	//ListNode* node3 = new ListNode(3);
	//ListNode* node4 = new ListNode(4);
	//ListNode* node5 = new ListNode(5);

	node1->next = node2;
	//node2->next = node3;
	//node3->next = node4;
	//node4->next = node5;

	reverseKGroup(node1, 2);
}
