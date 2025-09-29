int memo[n][n];  // -1 means not computed yet

int solve(i, j) {
    if (j - i < 2) return 0;  // no triangle possible
    if (memo[i][j] != -1) return memo[i][j];
    
    int result = infinity;
    for (k = i+1; k < j; k++) {
        result = min(result, solve(i,k) + solve(k,j) + v[i]*v[k]*v[j]);
    }
    return memo[i][j] = result;
}