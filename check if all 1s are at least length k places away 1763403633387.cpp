class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        bool first = true;
        int lastIndex = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1) {

                // First 1 found → just store its index
                if (first) {
                    first = false;
                    lastIndex = i;
                }

                else {
                    // Distance between 1s = i - lastIndex - 1
                    int gap = i - lastIndex - 1;

                    // If gap is smaller than k → invalid
                    if (gap < k)
                        return false;

                    lastIndex = i; // update last seen 1
                }
            }
        }

        return true;
    }
};