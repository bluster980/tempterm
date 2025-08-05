if (fruits[i]<=baskets[j]){
    ans--;// 1 basket used
    baskets[j]=0;// set basket[j] as 0 no more reuse
    break;// end of inner loop
}