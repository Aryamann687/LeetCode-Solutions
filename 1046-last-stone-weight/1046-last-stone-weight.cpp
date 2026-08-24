class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
      priority_queue<int> pq;
       for(int i=0;i<n;i++){
        pq.push(stones[i]);
       }
       while(pq.size()>=2){
        int y=pq.top();
        pq.pop();
        int x=pq.top();
        pq.pop();
        if(x==y) continue;
        pq.push(y-x);
       }
       if(pq.size()==1)
       return pq.top();
       return 0;
    }
};