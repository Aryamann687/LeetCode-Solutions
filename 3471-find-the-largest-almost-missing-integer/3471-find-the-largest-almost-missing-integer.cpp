class Solution {
public:
    int largestInteger(vector<int>& A, int k) {
        int n=A.size();
        unordered_map<int,int> freq;
        for(int x:A){
            freq[x]++;
        }
        if(k==n) return *max_element(A.begin(),A.end());
       
       if(k==1){
        int ans=-1;
        for(int x:A){
        if(freq[x]==1){
            ans=max(ans,x);

        }
       }
       return ans;
       }
       int ans=-1;
       if(freq[A[0]]==1){
        ans= max(ans,A[0]);
       }
       if(freq[A[n-1]]==1){
        ans=max(ans,A[n-1]);
       }
       
     return ans;
    }
};