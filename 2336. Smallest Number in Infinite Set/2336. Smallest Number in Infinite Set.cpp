#include <iostream>
#include <queue>
#include <unordered_set>
#include <set>
using namespace std;

// using Hard Code Runtime 144 ms
//class SmallestInfiniteSet {
//public:
//	priority_queue<int> minHeap;
//	unordered_set<int> set;
//	SmallestInfiniteSet()
//	{
//		for (int i = 1; i <= 1000; i++)
//		{
//			minHeap.push(i);
//			set.insert(i);
//		}
//	}
//
//	int popSmallest() {
//
//		if (minHeap.size() > 0)
//		{
//			int val = -minHeap.top();
//			minHeap.pop();
//			set.erase(val);
//			return val;
//		}
//
//		return 0;
//	}
//
//	void addBack(int num) {
//		if (!set.count(num))
//			minHeap.push(-num);
//	}
//};


// Without hard code
class SmallestInfiniteSet {
public:
	set<int> set;
	int current = 1;

	SmallestInfiniteSet()
	{
	}

	int popSmallest() {
		int ans;
		if (!set.empty())
		{
			ans = *set.begin();
			set.erase(set.begin());
			return ans;
		}
		else
		{
			ans = current;
			current += 1;
		}

		return ans;
	}

	void addBack(int num) {
		if (current < num || set.find(num) != set.end())
			return;

		set.insert(num);
	}
};

int main()
{
	SmallestInfiniteSet* obj = new SmallestInfiniteSet();

	obj->addBack(2);
	int x = obj->popSmallest();
	int x1 = obj->popSmallest();
	int x2 = obj->popSmallest();
	obj->addBack(1);
	int x3 = obj->popSmallest();
	int x4 = obj->popSmallest();
	int x5 = obj->popSmallest();
}