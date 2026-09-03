class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool possible=true;
        int n=nums1.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                count++;
            }
        }
        if(count==n) return true;
        sort(nums1.begin(),nums1.end());
        if(nums1[0]%2==0) possible=false;
        return possible; 
        
    }
};