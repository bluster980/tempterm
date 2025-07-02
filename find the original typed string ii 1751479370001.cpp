int maxT=k-m-1;
long long dp[2][2000]={0}, prefix[2001]={0};// reduced space for dp
// dp uses the &1( same as %2) trick to save the copying
dp[0][0]=1;// base case
// trasverse the seg
for (int j=0; j<m; j++) {
    const int s=seg[j];
    for (int i=0; i<=maxT; i++){
        prefix[i+1]=(prefix[i]+dp[j&1][i])%mod;// 1-indexed prefix sum
        int L=max(0, i-(s-1)), R=i;
        dp[(j+1)&1][i]=(prefix[R+1]-prefix[L]+mod)%mod;
    }
}