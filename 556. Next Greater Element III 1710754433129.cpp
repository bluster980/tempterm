class Solution {
public:
    void nextPermut(string &nums){
        int x=0,y=0;
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                x = i-1; break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i] > nums[x]){
                y = i; break;
            }
        }
        swap(nums[x], nums[y]);
        reverse(nums.begin()+x+1, nums.end());
    }
    int nextGreaterElement(int n) {
        if(n >= INT_MAX) return -1;
        string nums = to_string(n);
        nextPermut(nums);
        int temp = stoll(nums);
        return (temp > n) ? temp : -1;
    }
};