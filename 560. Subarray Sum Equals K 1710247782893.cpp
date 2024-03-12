class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; int cnt=0;
        for(int i=1; i<nums.size(); i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == k) cnt++;
            if(mp.find(nums[i]-k) != mp.end()){
                cnt+= mp[nums[i]-k];
            }
            mp[nums[i]]++;
        }
        return cnt;
    }
};