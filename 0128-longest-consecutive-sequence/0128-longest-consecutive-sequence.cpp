class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(),nums.end());
        int count=1;
        int maxCount=1;
        int n=nums.size();

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;

            }
            else if(nums[i]==nums[i-1]+1){
                count++;

            }
            else {
                maxCount=max(maxCount,count);
                count=1;

        }
        }

        return max(maxCount,count);

    }
};