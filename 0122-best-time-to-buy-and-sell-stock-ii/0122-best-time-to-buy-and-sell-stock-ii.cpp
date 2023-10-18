class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size() , bp = INT_MAX , sp , ans = 0 , Ans = 0 , an = 0;
        for(int i=0;i<n;i++){
            sp = prices[i];
            if(bp>prices[i]){
                bp = prices[i];
            }
            an=max(an,sp-bp);
        }
        bp = INT_MAX;
        for(int i=0;i<n;i++){
            sp = prices[i];
            if(bp>prices[i]){
                bp = prices[i];
            }
            ans = sp-bp;
            if(ans>0){
                Ans+=ans;
                bp = prices[i];
            }
        }
        if(an>Ans){
            return an;
        }else
        return Ans;
    }
};