class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "" , s2 = "";
        for(int i=0;i<s.length();i++){
            s1 += s[i];
            int s1Len = s1.length();
            if(s[i]=='#'){
                if(s1Len-2<0){
                    s1 = "";
                    continue;
                }
                s1 = s1.substr(0,s1Len-2);
            }
        }
        for(int i=0;i<t.length();i++){
            s2 += t[i];
            int s2Len = s2.length();
            if(t[i]=='#'){
                if(s2Len -2<0){
                    s2 = "";
                    continue;
                }
                s2 = s2.substr(0,s2Len-2);
            }else if(s2Len-1<0){
                s2 = "";
            }
        }
        cout<<s1<<" "<<s2;
        if(s1.compare(s2)==0){
            return true;
        }else return false;
    }
};