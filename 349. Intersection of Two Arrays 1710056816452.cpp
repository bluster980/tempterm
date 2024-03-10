class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        for(int i=0; i<nums1.size(); i++){
            st.insert(nums1[i]);
        }
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++){
            int be = st.size();
            st.insert(nums2[i]);
            int af = st.size();
            if(be == af) {ans.push_back(nums2[i]); st.erase(nums2[i]);}
        }
        return ans;
    }
};