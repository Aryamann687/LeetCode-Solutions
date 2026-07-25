class Solution {
public:
void solve(string ans,int open,int close,int n,vector<string>& result){
    if(ans.length()==2*n){
        result.push_back(ans);
        return;
    }
    if(open<n){
        solve(ans+"(",open+1,close,n,result);
    }
    if(close<open){
        solve(ans+")",open,close+1,n,result);

    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> result;
       solve("",0,0,n,result);
     return result;
     
    
    }
};