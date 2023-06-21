#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class RecentCounter {
public:
	RecentCounter() {

	}

	queue<int> que;
	int ping(int t)
	{
		if (t == NULL)
			return NULL;

		que.push(t);

		while (que.front() < t - 3000)
			que.pop();

		return que.size();
	}
};
int main()
{
	RecentCounter* obj = new RecentCounter();

	cout << obj->ping(1);
	cout << obj->ping(100);
	cout << obj->ping(3001);
	cout << obj->ping(3002);
}