class Solution {
public:
    int reverse(int x) {
        if(x == -2147483648 || x == -1563847412  ){
            return 0;
        }
        long ans = 0;
        if(x<0){
            long X = x;
            if(x!=int(X)){
                return 0;
            }
            X = ~X +1;
            // cout<<x;
            while(X>0){
            ans = ans*10 + X%10;
            X /= 10;
        }
        return int(~ans+1);

        }else{
            while(x>0){
                ans = ans*10 + x%10;
                if(!(ans == int(ans)))
                return 0;
                x /= 10;
                }
                return int(ans);

        }
        
    }
};