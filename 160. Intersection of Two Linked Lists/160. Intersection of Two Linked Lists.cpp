#include <iostream>
#include <unordered_map>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

//[4,1,8,4,5]
//[5,6,1,8,4,5]
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
	unordered_map<ListNode*, int> map;
	ListNode* temp = headA;


	while (temp)
	{
		map[temp]++;
		temp = temp->next;
	}

	temp = headB;

	while (temp)
	{
		if (map.find(temp) != map.end())
			return temp;

		temp = temp->next;
	}
	return NULL;
}

int main()
{
	ListNode* node = new ListNode(4);

	ListNode* node_4 = new ListNode(4);
	ListNode* node_1 = new ListNode(1);
	ListNode* node_8 = new ListNode(8);
	ListNode* node_4_1 = new ListNode(4);
	ListNode* node_5 = new ListNode(5);

	node_4->next = node_1;
	node_1->next = node_8;
	node_8->next = node_4_1;
	node_4_1->next = node_5;

	ListNode* node1_5 = new ListNode(5);
	ListNode* node1_6 = new ListNode(6);
	ListNode* node1_1 = new ListNode(1);
	ListNode* node1_8 = new ListNode(8);
	ListNode* node1_4 = new ListNode(4);
	ListNode* node1_5_1 = new ListNode(5);

	node1_5->next = node1_6;
	node1_6->next = node1_1;
	node1_1->next = node1_8;
	node1_8->next = node1_4;
	node1_4->next = node1_5_1;

	getIntersectionNode(node_4, node1_5);
}