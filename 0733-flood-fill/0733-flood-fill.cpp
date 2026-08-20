class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       queue<pair<int,int>> q;
        int rows=image.size();
        int cols=image[0].size();
        int original=image[sr][sc];
        if(original==color) return image;
        q.push({sr,sc});
        while(!q.empty()){
            int sz=q.size();
            vector<int> dr={-1,1,0,0};
            vector<int> dc={0,0,-1,1};
            image[sr][sc]=color;
            while(!q.empty()){
                auto[r,c]=q.front();
                q.pop();
                  for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr >= 0 && nr < rows &&
            nc >= 0 && nc < cols &&
            image[nr][nc] == original){

            image[nr][nc] = color;
            q.push({nr, nc});
            }
            }
        }
            }
            return image;
                    
            }
};