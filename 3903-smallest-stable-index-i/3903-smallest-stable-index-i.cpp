class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    int n=nums.size();
       int prefixMax=nums[0]; 
       for(int i=0;i<n;i++){
        prefixMax=max(prefixMax,nums[i]);
        int suffixMin=nums[i];
        for(int j=i;j<n;j++){
            suffixMin=min(suffixMin,nums[j]);
            

        }
        if(prefixMax-suffixMin<=k) return i; 

       }
       return -1;
    }
};