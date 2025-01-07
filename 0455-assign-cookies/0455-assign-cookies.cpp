class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int k=0,c=0;
        int ans=0;
        for(int i=0;i<g.size()&& c<s.size();i++){
            while(c<s.size()){
                if(g[i]<=s[c]){
                    ans++;
                    c++;
                    break;
                }
                c++;
            }
        }
        return ans;
    }
};