class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(); if(n<2) return nums[0];
        bool flag = true; int slow=-1, fast=0;
        while(flag){
            slow++;
            fast+=2;
            if(nums[slow%n] == nums[fast%n]) return nums[slow];
        }
        return 0;
    }
};