for(int i=0; i<n; i++){// double loop
    for(int j=0; j<i; j++){
        if(groups[i]!=groups[j] && hamming1(words[i], words[j]) 
        && dp[j]+1>dp[i]){// condition if satisfied
            dp[i]=dp[j]+1; // update dp[i]
            prev[i]=j; // set prev[i]=j
        }
    }
    if(dp[i]>maxLen){// Find the maxLen by comparing
        maxLen=dp[i]; // update maxLen
        pos=i; // its position
    }
}