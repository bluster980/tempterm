for(int r=0, l=0; r<n; r++){// moving r
    while(r<n && nums[r]==xMax){// move r by 1
        r++;
    }
    if (r==n || nums[r]<xMax) {
        maxLen=max(maxLen, r-l);// take maxLen as max of maxLen & r-l
        l=r+1;// move l to r+1
    }
    else {// r< n and nums[r]>=xMax
        xMax=nums[r];// update xMax
        maxLen=1;// reset maxLen=1
        l=r;// set l=r
    }
}
