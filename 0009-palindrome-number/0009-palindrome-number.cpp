class Solution {
public:
    bool isPalindrome(int x) {
       long int rev=0,temp=x;
        if(x==0)
        return true;
        if(x%10==0)
        return false;
        
        if(x>0){
            while(x!=0){
                rev=rev*10+x%10;
            x/=10;
            if(rev==temp)
            return true;
            

            }
            
        }
         return false;
    }
};