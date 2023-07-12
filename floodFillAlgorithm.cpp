/*

Problem Link: https://www.codingninjas.com/studio/problems/flood-fill-algorithm_8230806?challengeSlug=striver-sde-challenge

*/

void f(int i, int j, vector<vector<int>> &image, int oldcolor, int newcolor, int n, int m){
    if(i<0 or j<0 or i==n or j==m or image[i][j]!=oldcolor) return;
    image[i][j] = newcolor;
    f(i+1, j, image, oldcolor, newcolor, n, m);
    f(i-1, j, image, oldcolor, newcolor, n, m);
    f(i, j+1, image, oldcolor, newcolor, n, m);
    f(i, j-1, image, oldcolor, newcolor, n, m);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    int oldcolor = image[x][y];
    if (oldcolor==newColor) return image;
    int n = image.size(), m = image[0].size();
    f(x, y, image, oldcolor, newColor, n, m);
    return image;
}
