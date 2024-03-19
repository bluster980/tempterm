class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,maxx=0;
        while(i<nums.size()){
            int cnt = 0;
            while(i<nums.size() && nums[i]!=0){
                cnt++; i++;
            }
            maxx = max(maxx, cnt);
            i++;
        }
        return maxx;
    }
};