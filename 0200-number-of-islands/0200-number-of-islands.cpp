class Solution {
public:
int m,n;
int count=0;
vector<int> dr={-1,1,0,0};
vector<int> dc={0,0,-1,1};
void dfs(int r, int c, vector<vector<char>>& grid) {
    grid[r][c] = 'a';
    

    for (int k=0;k<4;k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]=='1')
            dfs(nr, nc, grid);
    }
}   int numIslands(vector<vector<char>>& grid) {
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
    }
};