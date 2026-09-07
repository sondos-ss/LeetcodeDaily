class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int n = s.size();
        map<char, int> mp;
        int ans = 0;
        int c = 0;
        while (l < n && r < n) {
            if (mp.count(s[r]) == 0 || mp[s[r]] == -1) { // edit
                c++;
                mp[s[r]] = r;
                r++;
            } else {
                int p = mp[s[r]];

                while (l <= p) {
                    mp[s[l]] = -1;
                    l++;
                }

                mp[s[r]] = r;
                c = r - l + 1;
                r++;
            }
            ans = max(ans, c);
        }
        return ans;
    }
};