class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int> ans;
        int n_by_3 = nums.size()/3+1;
        for(auto it:mp){
            if(it.second>=n_by_3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};