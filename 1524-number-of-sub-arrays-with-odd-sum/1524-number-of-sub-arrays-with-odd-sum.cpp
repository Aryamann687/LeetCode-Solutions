class Solution {
public:
const int MOD=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
         int odd=0;
         int even=1;
         int pref=0;
         long long ans=0;
         for(int i=0;i<n;i++){
            pref += arr[i];
             if(pref%2 !=0){
                ans =(ans+even)%MOD;
                odd++;
             }
            else {
                 ans=(ans+odd)%MOD;
                 even++;

            }
         }
      

     return ans;
        
    }
};