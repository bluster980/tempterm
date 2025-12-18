for(int i=1; i+k<=n; i++){ 
    modify+=prices[i+k-1]-prices[i+k2-1];
    profit=max(profit, modify+sum[n]-sum[i+k]+sum[i]);
}