class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si = 0;
        for(int i=0;i<t.length();i++){
            if(t[i] == s[si]){
                si++;
            }
        }
        if(si == s.length()){
            return true;
        }
        return false;
    }
};