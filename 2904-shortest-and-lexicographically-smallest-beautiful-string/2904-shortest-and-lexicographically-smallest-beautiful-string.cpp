class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int left = 0;
        int one_count = 0;

        int minLength = INT_MAX;
        string ans = "";

        for (int right = 0; right < n; right++) {

            if (s[right] == '1')
                one_count++;

            while (one_count >= k) {

                int length = right - left + 1;

                if (length < minLength) {
                    minLength = length;
                    ans = s.substr(left, length);
                }
                else if (length == minLength) {
                    string curr = s.substr(left, length);

                    if (curr < ans)
                        ans = curr;
                }

                if (s[left] == '1')
                    one_count--;

                left++;
            }
        }

        return ans;
    }
};