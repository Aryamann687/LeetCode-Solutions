class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int length=n-k;
        int sum=0;
        int totalsum=0;
        int left=0;
        for(int i=0;i<n;i++){
            totalsum+=cardPoints[i];
        }
        for(int i=0;i<length;i++){
            sum+=cardPoints[i];

        }
        int minSum=sum;

        for(int right=length; right<n ;right++){
            sum=sum-cardPoints[left]+cardPoints[right];
            left++;
            minSum=min(minSum,sum);
        }
        return totalsum-minSum;
    }
};