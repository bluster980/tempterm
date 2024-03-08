class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        if(nums.size() == 2){
            return (nums[0] > nums[1])?0:1;
        }
        if(nums[0] > nums[1]) return 0;
        if(nums[nums.size()-2] < nums[nums.size()-1]) return nums.size()-1;
        int l=0, r=nums.size()-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(mid>0 && mid<nums.size() && nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }
            else if(mid>0 && nums[mid] < nums[mid-1]){
                r = mid-1;
            }
            else if(mid<nums.size() && nums[mid] < nums[mid+1]){
                l = mid+1;
            }
        }
        return l;
    }
};