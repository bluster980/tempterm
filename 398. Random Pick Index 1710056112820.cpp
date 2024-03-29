class Solution {
public:
    unordered_map<int, vector<int>> mp;
    Solution(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
    }
    int pick(int target) {
        vector<int> temp = mp[target];
        int ran = (rand() % temp.size());
        // cout<<ran<<endl;
        return temp[ran];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */