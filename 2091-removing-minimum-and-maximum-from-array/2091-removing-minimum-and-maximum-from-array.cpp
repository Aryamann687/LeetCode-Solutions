class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int,int>> v;

        for(int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end());

        int minIndex = v[0].second;
        int maxIndex = v[n-1].second;
         int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int ans = min({
          right+1,
          n-left,
          left+1+n-right
        });

        return ans;
    }
};