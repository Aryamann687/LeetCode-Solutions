class Solution {
public:

    void dfs(int node, vector<vector<int>>& adj, vector<int>& suspicious){

        suspicious[node] = 1;

        for(int child : adj[node]){

            if(!suspicious[child])
                dfs(child, adj, suspicious);
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        vector<vector<int>> adj(n);

        for(auto &x : invocations)
            adj[x[0]].push_back(x[1]);

        vector<int> suspicious(n,0);

        dfs(k, adj, suspicious);

        
        for(auto &x : invocations){

            int u = x[0];
            int v = x[1];

            if(!suspicious[u] && suspicious[v]){

                vector<int> ans;

                for(int i=0;i<n;i++)
                    ans.push_back(i);

                return ans;
            }
        }

        vector<int> ans;

        for(int i=0;i<n;i++){

            if(!suspicious[i])
                ans.push_back(i);
        }

        return ans;
    }
};