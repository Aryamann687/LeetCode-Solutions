class Solution {
public:
const long long LIMIT = 1000000;

 
     long long combCapped(long long n, long long r) {
        if (r < 0 || r > n) return 0;
        r = min(r, n - r);
        if (r == 0) return 1;

        __int128 res = 1;
        for (long long i = 1; i <= r; i++) {
            res = res * (n - r + i) / i;
            if (res > LIMIT) return LIMIT + 1; 
        }
        return (long long)res;
    }
    long long countWays(vector<int>& cnt) {
        long long remaining = 0;
        for (int x : cnt) remaining += x;

        long long ans = 1;
        for (int c : cnt) {
            if (c == 0) continue;
            long long part = combCapped(remaining, c);
            ans *= part;
            if (ans > LIMIT) return LIMIT + 1;
            remaining -= c;
        }
        return ans;
    }


    string smallestPalindrome(string s, int k) {
      int m = s.size() / 2;

        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        vector<int> half(26);
        for(int i=0;i<26;i++){
            half[i]=freq[i]/2;

        }
        string left="";
        int n=s.size()/2;
        while(left.size()<n){
                bool found = false;

            for(int i=0;i<26;i++){
                if(half[i]==0) continue;
                half[i]--;
                long long ways=min(countWays(half),(long long)k);
                if(ways>=k){
                    left+=('a'+i);
                 found = true;

                    break;

                }
                k-=ways;
                half[i]++;

            }
        if(!found) return "";

        }
        char mid = '\0';

    for(int i=0;i<26;i++){
    if(freq[i] % 2)
        mid = 'a' + i;
}
        string right = left;
reverse(right.begin(), right.end());

string ans = left;

if(mid != '\0')
    ans += mid;

ans += right;

return ans;

    }
};