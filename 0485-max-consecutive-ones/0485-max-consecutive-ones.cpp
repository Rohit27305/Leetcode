class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0 , temp = 0;
        for(auto i : nums){
            if(i == 0){
                temp = 0;
                continue;
            }else{
            temp++;
            ans = max(ans , temp);
            }
        }
        return ans;
    }
};