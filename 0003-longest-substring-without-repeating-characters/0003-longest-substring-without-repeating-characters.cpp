class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int n=s.size();
        unordered_map<char,int> freq;
      int left=0;
      int maxLength=0;
        for(int i=0;i<n;i++){
            if (freq.count(s[i]) == 0 || freq[s[i]] < left){
                freq[s[i]]=i;
                maxLength=max(maxLength,i-left+1);
            }
            else{
                left=freq[s[i]]+1;
                freq[s[i]]=i;
            }

        }
        return maxLength;
    }
};