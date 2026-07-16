class Solution {
public:
    long long gcdSum(vector<int>& nums) {
      int n=nums.size();
        vector<int> prefixGcd;
        int mx=0;

        for(int i=0;i<n;i++){
           mx=max(mx,nums[i]);
           prefixGcd.push_back(gcd(mx,nums[i]));

        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int m=prefixGcd.size();
        long long sum=0;
        for(int i=0;i<m/2;i++){
            sum += gcd(prefixGcd[i],prefixGcd[m-i-1]);

        }
        return sum;

    }
};