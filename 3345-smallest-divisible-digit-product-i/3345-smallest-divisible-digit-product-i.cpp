class Solution {
public:
int digitProduct(int x){
    int ans=1;
    while(x>0){
        ans = ans*(x%10);
        x=x/10;

    }
    return ans;

}
    int smallestNumber(int n, int t) {
        int hehe=0;
        for(int i=n;i<n+10;i++){
            if(digitProduct(i)%t==0){
                hehe=i;
                break;
            }

        }
        return hehe;
    }
};