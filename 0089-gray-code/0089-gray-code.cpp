class Solution {
public:
int power(int x,  int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

    vector<int> grayCode(int n) {
        int m=power(2,n)-1;
        vector<int> result;
        int gray;
        for(int i=0;i<=m;i++){
        gray = i ^ (i >> 1);
        result.push_back(gray);
        }
        return result;
    }
};