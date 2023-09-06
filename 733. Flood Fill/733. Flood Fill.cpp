#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

	int currColor = image[sr][sc];
	if (currColor != color)
		dfs(image, sr, sc, currColor, color);

	return image;
}

void dfs(vector<vector<int>>& image, int r, int l, int currColor, int color)
{
	if (image[r][l] == currColor)
	{
		image[r][l] = color;
		if (r > 0) dfs(image, r - 1, l, currColor, color);
		if (l > 0) dfs(image, r, l - 1, currColor, color);
		if (r + 1 < image.size()) dfs(image, r + 1, l, currColor, color);
		if (l + 1 < image[0].size()) dfs(image, r, l + 1, currColor, color);
	}
}
int main()
{
}