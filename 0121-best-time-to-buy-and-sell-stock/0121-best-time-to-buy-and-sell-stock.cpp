class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size() , bp = INT_MAX , sp , ans = 0;
        for(int i=0;i<n;i++){
            sp = prices[i];
            if(bp>prices[i]){
                bp = prices[i];
            }
            ans = max(ans,sp-bp);
        }
        return ans;
    }
};