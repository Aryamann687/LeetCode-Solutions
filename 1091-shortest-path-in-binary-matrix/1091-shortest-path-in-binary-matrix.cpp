class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0] == 1)
            return -1;

        if (n == 1)
            return 1;

        queue<pair<int,int>> q;
        q.push({0, 0});

        grid[0][0] = 1;

        vector<int> dr = {-1,-1,-1,0,0,1,1,1};
        vector<int> dc = {-1,0,1,-1,1,-1,0,1};

        int distance = 1;

        while (!q.empty()) {

            int size = q.size();

            while (size--) {

                auto [r, c] = q.front();
                q.pop();

                for (int i = 0; i < 8; i++) {

                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if (nr >= 0 && nr < n &&
                        nc >= 0 && nc < n &&
                        grid[nr][nc] == 0) {

                        if (nr == n - 1 && nc == n - 1)
                            return distance + 1;

                        grid[nr][nc] = 1;
                        q.push({nr, nc});
                    }
                }
            }

            distance++;
        }

        return -1;
    }
};