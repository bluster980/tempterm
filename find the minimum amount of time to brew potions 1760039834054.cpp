for (int j=1; j<m; j++) {// consider the portions
    const long long curr=mana[j], prev=mana[j-1];//set cur &prev
    // the finishing time for wizard0 dealing with previous potion
    long long tMax=skill0*prev;
    for (int i=1; i<n; i++) {// trasverse over all wizards[1..n-1]
        //skill[i-1]*curr is eventually the brewing time 
        //up to wizard[i-1] to deal with  the current potion

        //skill[i]*prev is eventually the finishing time for 
        //current wizard to deal with the previous potion
        // the subtraction is the time needed for this potion
        tMax=max(tMax, skill[i]*prev-skill[i-1]*curr);
    }
    start+=tMax;// add tMax to start
}