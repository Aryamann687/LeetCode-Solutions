class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int n=s.size();
        unordered_map<char,int> lastSeen;
      int left=0;
      int maxLength=0;
        for(int i=0;i<n;i++){
            if (lastSeen.count(s[i]) == 0 || lastSeen[s[i]] < left){
                lastSeen[s[i]]=i;
                maxLength=max(maxLength,i-left+1);
            }
            else{
                left=max(left,lastSeen[s[i]]+1);
                lastSeen[s[i]]=i;
            }

        }
        return maxLength;
    }
};