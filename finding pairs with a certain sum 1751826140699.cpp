class FindSumPairs {
private:
    vector<int> nums1;
    vector<int> nums2;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) : nums1(nums1), nums2(nums2) {}
    
    void add(int index, int val) {
        nums2[index] += val;
    }
    
    int count(int tot) {
        int res = 0;
        for (int i = 0; i < nums1.size(); ++i) {
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums1[i] + nums2[j] == tot) {
                    res++;
                }
            }
        }
        return res;
    }
};

