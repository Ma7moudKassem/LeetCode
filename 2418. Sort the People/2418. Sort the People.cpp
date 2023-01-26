#include <iostream>
#include <vector>
#include <map>
using namespace std;

// using Selection Sort 

void swap(pair<string, int>* firstPeople, pair<string, int>* secondPeople)
{
	pair<string, int> temp = *firstPeople;
	*firstPeople = *secondPeople;
	*secondPeople = temp;
}

vector<pair<string, int>> selectionSort(vector<pair<string, int>> arr)
{
	for (int i = 0; i < arr.size() - 1; i++)
	{
		int max_index = i;
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j].second > arr[max_index].second)
				max_index = j;
		}
		if (max_index != i)
			swap(arr[i], arr[max_index]);
	}
	return arr;
}

vector<string> sortPeople(vector<string>& names, vector<int>& heights)
{
	vector<pair<string, int>> people;
	vector<string> result;

	for (int i = 0; i < names.size(); i++)
		people.push_back({ names[i] , heights[i] });

	for (auto one : selectionSort(people))
		result.push_back(one.first);

	return result;
}

int main()
{
	vector<string> names = { "Alice","Bob","Bob" };
	vector<int> heights = { 155,185,150 };

	vector<string> re = sortPeople(names, heights);
}