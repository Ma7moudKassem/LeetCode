#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

class AllOne {
public:
	set<pair<int, string>> data;
	unordered_map<string, int> keys;
	AllOne() {

	}

	void inc(string key) {
		int count = keys[key];
		data.erase({ count , key });

		keys[key]++;

		data.insert({ keys[key], key });
	}

	void dec(string key) {
		int count = keys[key];
		data.erase({ count , key });

		keys[key]--;
		if (keys[key] == 0)
			keys.erase(key);
		else
			data.insert({ keys[key],key });
	}

	string getMaxKey() {

		return data.size() == 0 ? "" : prev(data.end())->second;
	}

	string getMinKey() {
		return data.size() == 0 ? "" : data.begin()->second;
	}
};


int main()
{
	AllOne* obj = new AllOne();

	obj->inc("hello");
	obj->inc("leet");
	string param_3 = obj->getMaxKey();
	string param_4 = obj->getMinKey();
	obj->inc("hello");
	string param_5 = obj->getMaxKey();
	string param_6 = obj->getMinKey();

}