class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> ans;
        int currEle=nums[0];
      for(int i=0;i<n;currEle++,i++){
           if(currEle<nums[i]){
            ans.push_back(currEle);
            i--;
            
           }
      }
      return ans;
      
    }
};