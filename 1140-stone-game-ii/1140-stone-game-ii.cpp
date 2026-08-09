class Solution {
public:
int n;
vector<int> suffix;
vector<vector<int>> dp;

int solve(int i, int M,vector<int>& piles) {

    if (i >= n)
        return 0;
    if (dp[i][M] != -1)
    return dp[i][M];

    int ans = 0;

    for (int x = 1; x <= 2 * M && i + x <= n; x++) {

        int opponent = solve(
            i + x,
            max(M, x),piles
        );

        int current = suffix[i] - opponent;

        ans = max(ans, current);
    }

      return dp[i][M] = ans;

}
    int stoneGameII(vector<int>& piles) {
          n = piles.size();

        suffix.resize(n);

        suffix[n - 1] = piles[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = piles[i] + suffix[i + 1];
        }

        dp.assign(n, vector<int>(n + 1, -1));

        return solve(0, 1, piles);
    }
};