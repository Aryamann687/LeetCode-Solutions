class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0;
        int n=s.size();
        int j=n;
        vector<int> v;
        for(char c:s){
            if(c=='I') v.push_back(i++);
            else v.push_back(j--);

        }
        v.push_back(i);
        return v;
    }
};