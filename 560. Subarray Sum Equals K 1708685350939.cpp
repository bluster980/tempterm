class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; mp[nums[0]]++; mp[0]++;
        for(int i=1; i<nums.size(); i++){
            nums[i] += nums[i-1];
            mp[nums[i]]++;
        }
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]-k)!=mp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};