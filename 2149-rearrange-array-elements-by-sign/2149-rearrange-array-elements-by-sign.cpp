class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       

        int n=nums.size();
         vector<int> positive;
          vector<int> negative;
       
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else negative.push_back(nums[i]);

        }
        nums[0]=positive[0];
        nums[1]=negative[0];
        for(int i=2;i<n;i+=2){
            nums[i]=positive[i/2];
        }
         for(int i=3;i<n;i+=2){
            nums[i]=negative[i/2];
        }
        return nums;


    }
};