class Solution {
public:
    int minimumMoves(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
             i+=2;
            j++;
            }
        }
        return j;
    }
};