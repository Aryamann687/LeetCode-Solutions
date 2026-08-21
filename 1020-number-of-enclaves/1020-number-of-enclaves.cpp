class Solution {
public:
int m,n;
vector<int> dr={-1,1,0,0};
vector<int> dc={0,0,-1,1};
void dfs(int r, int c, vector<vector<int>>& grid) {
    grid[r][c] = -1;
    

    for (int k=0;k<4;k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]==1)
            dfs(nr, nc, grid);
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
   for (int j = 0; j < n; j++) {
    if (grid[0][j] == 1) dfs(0, j, grid);
    if (grid[m-1][j] == 1) dfs(m-1, j, grid);
}
for (int i = 0; i < m; i++) {
    if (grid[i][0] == 1) dfs(i, 0, grid);
    if (grid[i][n-1] == 1) dfs(i, n-1, grid);
}
int ans=0;

for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1) ans++;
            
}
}  
return ans;
    }
};