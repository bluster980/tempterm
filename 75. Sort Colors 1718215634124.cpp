class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0,r = nums.size()-1; int i=0;
        while(i<nums.size()){
            if(i>l && nums[i] == 0){
                while(i>l && nums[l] == 0){
                    l++;
                }
                swap(nums[l++],nums[i]);
            }
            else if(i<r && nums[i] == 2){
                while(i<r && nums[r] == 2){
                    r--;
                }
                swap(nums[r--],nums[i]);
            }
            else{
                i++;
            }
        }
    }
};