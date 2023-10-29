class Solution {
public:
    bool isPalindrome(string s) {
        string real = "";
        for(int i=0;i<s.length();i++){
            int temp = s[i];
            if((temp>=65&&temp<=90)||(temp>=97&&temp<=122)||(temp>=48&&temp<=57)){
            real += s[i];
            }
        }
        for(int i = 0 , j = real.length()-1; i < real.length() ; i++ , j--){
            real[i] = tolower(real[i]);real[j] = tolower(real[j]);
            if(real[i]!=real[j])
            return false;
        }
        return true;
    }
};