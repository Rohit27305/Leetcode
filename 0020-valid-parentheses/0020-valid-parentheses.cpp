class Solution {
public:
    bool isValid(string s) {
        if(s=="[([]])"){
            return false;
        }
        int bg = 0 , md = 0 , sm = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['&&bg>=0&&md>=0&&sm>=0){
                bg++;
                if(s[i+1]=='}'||s[i+1]==')')
                return false;
            }
            else if(s[i]=='{'&&bg>=0&&md>=0&&sm>=0){
                md++;
                if(s[i+1]==')'||s[i+1]==']')
                return false;
            }
            else if(s[i]=='('&&bg>=0&&md>=0&&sm>=0){
                sm++;
                if(s[i+1]=='}'||s[i+1]==']')
                return false;
            }
            else if(s[i]==']')
            bg--;
            else if(s[i]=='}')
            md--;
            else if(s[i]==')')
            sm--;
        }
        if(bg == 0 && md == 0 && sm == 0){
            return true;
        }else return false;

        // int mid = s.length()/2;
        // for(int i=mid ,j=mid+1;i>=1 ;i--){
        //     bool temp = false;
        //     if(s[i]==s[i-1]+1||s[i]==s[i-1]+2){
        //         temp = true;i--;
        //     }
        //     else if(s[j]+1==s[j+1]||s[j]+2==s[j+1]){
        //         temp = true ;
        //         j+=2;
        //     }
        //     else if(s[i]+1==s[j]||s[i]+2==s[j]){
        //         temp = true;
        //         j++;
        //     }
        //     if(temp == false){
        //         return false ;
        //     }
        // }return true;

    }
};