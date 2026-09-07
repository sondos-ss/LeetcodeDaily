class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int n = s.size();
        vector<int> v(256, -1);
        int ans = 0;
        int c = 0;
        for (int r = 0; r < n; r++) {
            if (v[s[r]] < l) {
                c++;
                v[s[r]] = r;
            } else {
                int p = v[s[r]];
                l = p + 1;
                v[s[r]] = r;
                c = r - l + 1;
            }
            ans = max(ans, c);
        }
        return ans;
    }
};