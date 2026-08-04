class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),
     [](vector<int>& a, vector<int>& b) {
         return a[1] < b[1];
     });
     int count = 1;
     int lastEnd = pairs[0][1];
     int n=pairs.size();
     for(int i=1;i<n;i++){
        if(pairs[i][0] > lastEnd){
            lastEnd=pairs[i][1];
            count++;
        }
     }
     return count;
    }
};