for(int i=n; i<=2*n; i++){// trasverse the middle part forward
    diff[i-n]=sum;// notice the index for diff, store current sum in diff
    int x=nums[i];
    if (x>=pqL.top()) continue;// if x>=max of heap just skip this iteration
    sum+=x-pqL.top();//replace the max by x if x<max
    pqL.pop();
    pqL.push(x);
}