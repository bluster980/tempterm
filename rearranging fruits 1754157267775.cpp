for (int i=0, j=m2-1; i<m1 && j>=0;) {
    auto& [b1, f1]=B1[i];// call by ref, f1 will be changed
    auto& [b2, f2]=B2[j];
    int f0=min(f1, f2);// f0 is min of f1 & f2
    // direct swap or 2 times swaps with minX
    long long swapCost=min(min(b1, b2), 2*minX);
    cost+=swapCost*f0;// add f0*swapCost to cost

    f1-=f0;// used swaps must be removed 
    f2-=f0;
    i+=(f1==0);// next i
    j-=(f2==0);// next j
}