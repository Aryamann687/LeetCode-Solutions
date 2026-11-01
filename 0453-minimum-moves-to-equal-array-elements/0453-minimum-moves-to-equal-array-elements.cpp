class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int mn = *min_element(nums.begin(), nums.end());
        long long moves=0;
        for(int i=0;i<n;i++){
            moves += abs(mn-nums[i]);
        }
   return moves;

    }
};