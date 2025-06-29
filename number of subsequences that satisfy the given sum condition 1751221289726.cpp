 while(l<=r){
    if( nums[l]+nums[r]<=target){
        // among nums[l+1..r] the elements can be taken or not
        ans=(ans+2**(r-l))%mod;// 2**(r-l) choices to build a subseq
        l++;// move l by +1
    }
    else r--;// move r by -1
}