// want to find i0 such that  arr[i0]+arr[i1]=arr[i2]
for (int i1=1; i1<n-1; i1++) {
    int f1=arr[i1];
    for (int i2=i1+1; i2<n; i2++) {
        int f2=arr[i2];
        int f0=f2-f1;  // Fibonacci first term
        if (f0>=f1) break; //impossible for tuple (f0, f1, f2)
        if (x2i.count(f0)) {  //Found
            int i0=x2i[f0];
            dp[i1][i2]=dp[i0][i1]+1;
        }

        ans=max(ans, dp[i1][i2]);  //Track the max length
    }
}