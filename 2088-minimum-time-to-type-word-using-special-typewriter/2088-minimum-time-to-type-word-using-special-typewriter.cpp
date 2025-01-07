class Solution {
public:
    int minTimeToType(string word) {
        char c='a';
        int ans=0;
        for(int i=0;i<word.size();i++){
            if(c==word[i]){
                ans++;
            } else{
                int k = min(abs(c - word[i]), 26 - abs(c - word[i]));
                ans+=k;
                ans+=1;
                c=word[i];
            }
        }
        return ans;
    }
};