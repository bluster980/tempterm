for( ; l<=r; l++){
    while(D[l]=='R'){
        l++;
        col++;// These 'R's will collide at final
    }
    // deal with the 1st collison; the last 'R' has already +1 
    if (D[l]=='L') col++;// "RL" increment +2
}
return col; 