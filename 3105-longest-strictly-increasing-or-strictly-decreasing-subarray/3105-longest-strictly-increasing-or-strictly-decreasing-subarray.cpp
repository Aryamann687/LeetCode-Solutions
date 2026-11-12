class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
      int maxLength=1;
      int increasing=1;
      int decreasing=1;
      int n=nums.size();

      for(int i=0;i<n-1;i++){
      if(nums[i]>nums[i+1]){
      decreasing++;
      increasing=1;

      } 

      else if(nums[i]<nums[i+1]) {
        decreasing=1;
        increasing ++;
      }
      else{
        increasing=1;
        decreasing=1;
      }
      maxLength=max(maxLength,max(increasing,decreasing));
      }
      return maxLength;
    }
};