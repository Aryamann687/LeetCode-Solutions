class Solution {
public:
vector<int> arr;
      
vector<vector<int>> dp;

   int solve(int i,int j){
         if(i==j)
        return arr[i];

    if(dp[i][j]!=INT_MIN)
        return dp[i][j];

    return dp[i][j]=max(
            arr[i]-solve(i+1,j),
            arr[j]-solve(i,j-1)
    );
   }
    bool predictTheWinner(vector<int>& nums) {
        arr=nums;
        int n=arr.size();
        dp.assign(n, vector<int>(n, INT_MIN));

        
        
        return solve(0,n-1)>=0;
    }
};