for(int i=0; i<n; i++){// pointer i as right
    const int x=arr[i];
    int skip=0, take=x;//Consider or sums for skipping x & taking x
    ans.push_back(take);// add take into ans
    // left pointer j, it will proceed at most 30 times , due to max(arr)<=1e9
    for(int j=i-1; j>=0; j--){
        skip|=arr[j];// or sum skip
        take=skip|x;// or sum take
        if (skip==take) break;// end of inner loop
        ans.push_back(take);// add ans to ans
    }
}   