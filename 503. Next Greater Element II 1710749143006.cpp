class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        int n = nums.size();
        stack<int> st; 
        vector<int> ans(nums.size(), -1);
        for(int i=0; i<n*2; i++){
            while(!st.empty() && nums[i%n] > nums[st.top()]){
                ans[st.top()] = nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return ans;
    }    
};