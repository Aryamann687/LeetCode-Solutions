class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        vector<long long> exact(mx + 1, 0);

        for (int d = mx; d >= 1; d--) {

            long long cnt = 0;

            for (int multiple = d; multiple <= mx; multiple += d)
                cnt += freq[multiple];

            exact[d] = cnt * (cnt - 1) / 2;

            for (int multiple = 2 * d; multiple <= mx; multiple += d)
                exact[d] -= exact[multiple];
        }

        vector<long long> prefix(mx + 1, 0);

        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + exact[i];

        vector<int> ans;

        for (long long q : queries) {

            int gcdValue =
                lower_bound(prefix.begin() + 1,
                            prefix.end(),
                            q + 1)
                - prefix.begin();

            ans.push_back(gcdValue);
        }

        return ans;
    }
};