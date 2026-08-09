class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        int length=0;
        for(char c:s){
          freq[c]++;
        }
        bool hasOdd=false;
        for(auto p : freq) {
    int f = p.second;
    
    length += (f / 2) * 2;

    if(f % 2 == 1)
        hasOdd = true;
}
if(hasOdd) length+=1;
return length;
    }
};