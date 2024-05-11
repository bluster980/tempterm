class Solution {
public:
    int helper(int temp, int m, int n){
        int sum = 0;
        for(int i=1; i<=m; i++){
            sum += min(temp/i, n);
        }
        return sum;
    }
    int findKthNumber(int m, int n, int k) {
        int l=1, r=m*n;
        while(l<=r){
            int mid = l+(r-l) / 2;
            if(helper(mid, m, n) < k){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return l;
    }
};