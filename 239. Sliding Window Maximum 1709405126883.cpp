class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0; i<k; i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        ans.push_back(mp.rbegin()->first); int x = 0;
        for(int i=k; i<nums.size(); i++){
            if(mp[nums[x]] > 1) mp[nums[x]]--;
            else mp.erase(nums[x]);
            x++;
            mp[nums[i]]++;
            ans.push_back(mp.rbegin()->first);
        }
        return ans;
    }
};