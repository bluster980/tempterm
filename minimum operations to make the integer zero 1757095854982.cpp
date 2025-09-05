for(int k=1; k<61; k++){// k<61 can be removed
    x-=num2;// in fact x=num1-k*num1
    if (x<k) return -1;// too few 1s
    if (x>=0 && k>=popcount((unsigned long long)(x))) //x>=0 is checked, for the case num2<0
        return k;
}