class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> pq;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        long long ans = 0;
        while(k--){
            ans += (pq.top()); 
            // cout<<ans<<" ";
            pq.push(ceil(pq.top()/3.0)); pq.pop();
        }
        // cout<<endl;
        return ans;
    }
};