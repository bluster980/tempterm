class Solution {
   public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            if (is_inc_sub(nums, k, i) && is_inc_sub(nums, k, i + k))
                return true;
        }
        return false;
    }
    bool is_inc_sub(vector<int>& nums, int k, int st) {
        if(k == 1)
            return true;
        if (st + k > nums.size())
            return false;
        for (int i =  1; i < k; i++) {
            if (nums[st + i] <= nums[st + i - 1])
                return false;
        }
        return true;
    }
};