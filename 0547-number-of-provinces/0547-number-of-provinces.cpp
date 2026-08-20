class Solution {
public:

int count=0;
void dfs(int city, vector<vector<int>>& isConnected, vector<int>& visited) {
    visited[city] = 1;

    for (int j = 0; j < isConnected.size(); j++) {
        if (isConnected[city][j] && !visited[j]) {
            dfs(j, isConnected, visited);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,isConnected,visited);
                count++;
            }
        
        }
      return count;

    }
};