#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
	MyQueue() {

	}
	stack<int> data;
	stack<int> reversedData;
	void push(int x) {
		data.push(x);
	}

	int pop() {
		reversedData = stack<int>();
		while (data.size())
		{
			reversedData.push(data.top());
			data.pop();
		}

		int value = reversedData.top();
		reversedData.pop();

		while (reversedData.size())
		{
			data.push(reversedData.top());
			reversedData.pop();
		}

		return value;
	}

	int peek() {
		stack<int> temp = data;
		int value = 0;
		while (temp.size())
		{
			value = temp.top();
			temp.pop();
		}

		return value;
	}

	bool empty() {
		return data.size() == 0;
	}
};

int main()
{
}