class Solution {
public:
    string smallestPalindrome(string s) {
      
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;

        }
          string left="";
          string ans="";
        char mid='\0';
        for(char c='a';c<='z';c++){
            left.append(mp[c]/2,c);
            if(mp[c]%2==1){
                mid=c;
            }
        }
        string right=left;


     reverse(right.begin(),right.end());
     if(mid!='\0'){
        ans=left+mid+right;
        return ans;
     }
     ans=left+right;
     return ans;
    }
};