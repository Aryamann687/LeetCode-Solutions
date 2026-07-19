class Solution {
public:
    string removeDuplicateLetters(string s) {
       unordered_map<char,int> freq;
       unordered_map<char,bool>inStack;
       for(int i=0;i<s.size();i++){
        freq[s[i]]++;
       } 
         stack<char> st;
         for(char ch:s){
            freq[ch]--;
            if(inStack[ch])
            continue;
            while(!st.empty() && st.top()>ch && freq[st.top()]>0){
                inStack[st.top()]=false;
                st.pop();

            }
            st.push(ch);
            inStack[ch]=true;

         }
         string ans="";
         while(!st.empty()){
            ans+=st.top();
            st.pop();

         }

         reverse(ans.begin(),ans.end());
         return ans;

       
    }
};