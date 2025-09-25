if (dp[i][j] != INT_MAX) 
    return dp[i][j];// avoid of redudant computation
if (i==0) 
    return dp[0][0] = t[0][0];// base case for i==0
if (j==0) 
    return dp[i][j] = t[i][j] + findMin(i-1, j, t);// deal with j==0
if (i==j) 
    return dp[i][j] = t[i][j] + findMin(i-1,j-1, t);// deal with i==j
// otherwise
return dp[i][j] = 
        t[i][j] + min(findMin(i - 1, j, t), findMin(i - 1, j - 1, t));