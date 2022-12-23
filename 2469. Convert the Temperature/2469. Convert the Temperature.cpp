#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius)
{
	vector<double> temp;

	temp.push_back(celsius + 273.15);
	temp.push_back(celsius * 1.80 + 32.00);

	return temp;
}

int main() {}