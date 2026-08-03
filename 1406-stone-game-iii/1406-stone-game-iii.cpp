class Solution {
public:
    vector<int> dp;
    vector<int> stone;

    int solve(int i) {
        int n = stone.size();

        if (i >= n)
            return 0;

        if (dp[i] != INT_MIN)
            return dp[i];

        int take = 0;
        int ans = INT_MIN;

        for (int k = 0; k < 3 && i + k < n; k++) {
            take += stone[i + k];
            ans = max(ans, take - solve(i + k + 1));
        }

        return dp[i] = ans;
    }

    string stoneGameIII(vector<int>& stoneValue) {

        stone = stoneValue;
        int n = stone.size();

        dp.assign(n, INT_MIN);

        int diff = solve(0);

        if (diff > 0)
            return "Alice";
        else if (diff < 0)
            return "Bob";
        else
            return "Tie";
    }
};