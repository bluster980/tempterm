class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        //sorts the given vector
        auto last=unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        //unique function sorts the unique element in the list

        nums.erase(remove_if(nums.begin(), nums.end(), [](int x) { return x <= 0; }), nums.end());
        //removes negative value(x<0)

        int n = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != n) {
                return n;
            }
            n++;
        }
        return n;
    }
};
