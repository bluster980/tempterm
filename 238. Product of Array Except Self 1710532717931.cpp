class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int temp = 1;
        for(int i=0; i<n; i++){
            temp *= nums[i];
            ans[i] = temp;
        }
        int dumy = 1;
        for(int i=n-1; i>0; i--){
            ans[i] = ans[i-1] * dumy;
            dumy *= nums[i];
        }
        ans[0] = dumy;
        return ans;
    }
};