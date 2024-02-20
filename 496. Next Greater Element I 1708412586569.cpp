class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st; map<int,int> mp;
        for(int i=0; i<nums2.size(); i++){
            if(!st.empty()){
                while(!st.empty() && (st.top() < nums2[i])){
                    mp[st.top()] = nums2[i];
                    st.pop();
                }
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int> v;
        for(int i=0; i<nums1.size(); i++){
            v.push_back(mp[nums1[i]]);
        }
        return v;
    }
};