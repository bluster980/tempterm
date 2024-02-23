class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0) return ans;
            if(i>0 && (nums[i]==nums[i-1])) continue;
            for(int j=i+1; j<nums.size(); j++){
                if(j>i+1 && (nums[j] == nums[j-1])) continue;
                int temp = -(nums[i]+nums[j]);
                if(mp.find(temp) != mp.end() && mp[temp]>j){
                    ans.push_back({nums[i],nums[j],temp});
                }
            }
        }
        return ans;
    }
};