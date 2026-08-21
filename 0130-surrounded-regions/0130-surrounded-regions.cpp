class Solution {
public:
int m,n;
vector<int> dr={-1,1,0,0};
vector<int> dc={0,0,-1,1};
void dfs(int r, int c, vector<vector<char>>& board) {
    board[r][c] = '#';
    

    for (int k=0;k<4;k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr>=0 && nr<m && nc>=0 && nc<n && board[nr][nc]=='O')
            dfs(nr, nc, board);
    }
}
    void solve(vector<vector<char>>& board) {
        m=board.size();
        n=board[0].size();
      for (int j = 0; j < n; j++) {
    if (board[0][j] == 'O') dfs(0, j, board);
    if (board[m-1][j] == 'O') dfs(m-1, j, board);
}
for (int i = 0; i < m; i++) {
    if (board[i][0] == 'O') dfs(i, 0, board);
    if (board[i][n-1] == 'O') dfs(i, n-1, board);
}

for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (board[i][j] == 'O')
            board[i][j] = 'X';
        else if (board[i][j] == '#')
            board[i][j] = 'O';
    }
}
        
    }
};