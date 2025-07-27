for(int i=1; i<n; i++){// loop from i=1 to n-1
    while(i<n && prev==nums[i]) i++;// while loop for equal range
    if (i==n) break;// already passed to the end
    bool bigger=nums[i]>prev;// whether bigger=nums[i]>prev 
    diff[bigger]=1; // set diff[bigger] to be true
    cnt+=diff[bigger] && diff[!bigger]; // add 1 to cnt if both diff[0]==1 and diff[1]==1
    diff[!bigger]=0;// set diff[!bigger]=false
    prev=nums[i]; // update prev=nums[i]
}