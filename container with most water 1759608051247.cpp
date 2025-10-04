while (l<r){
    //update A with max of A & current area
    A=max(A, area(l, r, height));

    // move either r or l when its height is smaller
    if(height[r]<height[l]) r--;// moving r
    else l++;// moving l
}