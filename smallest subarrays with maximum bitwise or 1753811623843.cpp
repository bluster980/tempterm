for (int i=n-1; i>= 0; i--) {// backward trasversal
    const unsigned x=nums[i];
    int j=i; // start from i
    bitset<30> X(x); // bitset for x
    for (int b=0; b<30; b++) {// trasverse each bit b
        if (X[b]) // if bth bit is set
            last[b]=i; // update last[b]
        j=max(j, last[b]); // j=max(last)
    }
    ans[i]=j-i+1;// size for ans[i]
}
