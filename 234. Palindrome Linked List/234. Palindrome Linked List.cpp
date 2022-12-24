#include <iostream>
#include <unordered_map>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// 1-->2-->2-->1

bool isPalindrome(ListNode* head) {
	vector<int> arr;
	vector<int> result;
	while (head != nullptr)
	{
		arr.push_back(head->val);
		head = head->next;
	}
	for (int i = arr.size() - 1; i >= 0; i--)
		result.push_back(arr[i]);

	return result == arr;
}

int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(2);
	ListNode* l4 = new ListNode(1);
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;

	cout << isPalindrome(l1);
}