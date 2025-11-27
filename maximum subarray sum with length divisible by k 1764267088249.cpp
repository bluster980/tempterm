long long maxSubarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       vector<long long> minPrefixSum(k,1e15);
       minPrefixSum[0]=0;
       long long maxSubarraySum=LONG_MIN,curPrefixSum=0;
       for(int i=1;i<=n;i++){
           curPrefixSum+=nums[i-1];
           maxSubarraySum=max(maxSubarraySum,curPrefixSum-minPrefixSum[i%k]);
           minPrefixSum[i%k]=min(minPrefixSum[i%k],curPrefixSum);
       }
       return maxSubarraySum;
   }