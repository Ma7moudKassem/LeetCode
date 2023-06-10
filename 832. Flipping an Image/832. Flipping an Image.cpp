#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
	int i = 0,
		j = 0,
		n = image.size(),
		x = image[0].size();

	while (i < n)
	{
		if (image[i][j] == 0)
		{
			image[i][j] = 1;
			j++;
		}
		else
		{
			image[i][j] = 0;
			j++;
		}

		if (j >= x)
		{
			reverse(image[i].begin(), image[i].end());
			i++;
			j = 0;
		}
	}

	return image;
}


int main()
{

	vector<vector<int>> image = { {1, 1, 0, 0},{1, 0, 0, 1},{0, 1, 1, 1},{1, 0, 1, 0} };

	flipAndInvertImage(image);
}