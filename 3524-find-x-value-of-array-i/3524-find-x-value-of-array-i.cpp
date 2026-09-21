class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
         vector<long long> result(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {
            vector<long long> next(k, 0);
            int a = num % k;
            next[a]++;

            for (int r = 0; r < k; ++r) {
                if (dp[r] == 0) continue;

                int nr = (long long)r * a % k;
                next[nr] += dp[r];
            }
            for (int r = 0; r < k; ++r) {
                result[r] += next[r];
            }

            dp.swap(next);
        }

        return result;
    }
};