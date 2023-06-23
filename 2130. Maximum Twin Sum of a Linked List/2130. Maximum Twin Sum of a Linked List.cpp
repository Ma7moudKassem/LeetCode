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

int pairSum(ListNode* head)
{
	vector<int> arr;

	while (head != NULL)
	{
		arr.push_back(head->val);
		head = head->next;
	}
	int n = arr.size(), sum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (i >= 0 && i <= (n / 2) - 1)
			sum = max(sum, (arr[i] + (arr[n - 1 - i])));
	}

	return sum;
}

int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(100000);
	ListNode* l3 = new ListNode(2);
	ListNode* l4 = new ListNode(1);
	//ListNode* l5 = new ListNode(5);
	//ListNode* l6 = new ListNode(6);
	//ListNode* l7 = new ListNode(7);
	//ListNode* l8 = new ListNode(8);
	l1->next = l2;
	//l2->next = l3;
	//l3->next = l4;
	//l4->next = l5;
	//l5->next = l6;
	//l6->next = l7;
	//l7->next = l8;

	cout << pairSum(l1);
}