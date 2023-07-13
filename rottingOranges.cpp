/*

Problem Link: https://www.codingninjas.com/studio/problems/rotting-oranges_8230701?challengeSlug=striver-sde-challenge

*/

#include <queue>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    queue<pair<int, int>> q;
    int tot = 0;
    int days = 0;
    int cnt=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != 0) tot++;
            if (grid[i][j] == 2) q.push({i, j});
        }
    }
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
 
    while (!q.empty()) {
        int k = q.size();
        cnt += k;
        while (k--) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] != 1) continue;
                grid[nx][ny] = 2;
                q.push({nx, ny});
            }
        }
        if (!q.empty()) days++;
    }
 
   if (cnt!=tot) return -1;
   return days;
}
