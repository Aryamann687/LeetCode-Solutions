class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
   int n=arr.size();
   vector<int> temp=arr;
   sort(temp.begin(),temp.end());
   unordered_map<int,int>rank;
   int curr_rank=1;
   for(int x:temp){
    if(!rank.count(x)){
        rank[x]=curr_rank++;

    }
   }
   for(int i=0;i<n;i++){
    arr[i]=rank[arr[i]];
   }
    return arr;
    }
   

};