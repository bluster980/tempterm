// along the line i+j=d for d=0,1, r+c-2; flip after each iteration
for (int d=0, idx=0; d < r+c-1; d++, flip=!flip) {
    if (!flip) {// go NE
        // initital with i=min(d, r-1), j=d-i
        // do while i>=0 && j<c; change i--, j++ 
        for (int i=min(d, r-1), j=d-i; i>=0 && j<c; i--, j++) 
            ans[idx++]=mat[i][j];
    } 
    else {// go SW
        // initial with j=min(d, c-1), i=d-j
        // do while j>=0 && i<r; change i++, j--
        for (int j=min(d, c-1), i=d-j; j>=0 && i<r; i++, j--) {
            ans[idx++]=mat[i][j];
        }
    }
}