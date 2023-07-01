#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

unordered_set<int> visitedRooms;

bool canVisitAllRooms(vector<vector<int>>& rooms) {

	DFS(rooms, 0);

	return rooms.size() == visitedRooms.size();
}

void DFS(vector<vector<int>>& rooms, int key)
{
	vector<int> keys = rooms[key];
	visitedRooms.insert(key);
	for (auto key : keys)
	{
		if (!visitedRooms.count(key))
			DFS(rooms, key);
	}
}

int main()
{
}