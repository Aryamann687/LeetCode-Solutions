class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;

        }
        vector<vector<char>> bucket(s.size()+1);
        for(auto &p:mp){
            bucket[p.second].push_back(p.first);
        }
        string ans="";
        for(int i=s.size();i>=0;i--){
            for(char c:bucket[i]){
                ans.append(i,c);
            }
        }
        return ans;
    }
};