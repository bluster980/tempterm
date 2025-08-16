// initial n=num & d=0, do the loop until n==0 with change 
// n/=10 & d++ where d denotes the position for digit
for(int n=num, d=0; n>0; n/=10, d++) {
    int r=n%10;// current digit 
    if (r==6) //a=eventual pos of candidate of digit replacement 
        a=d;//6 by 9, since d is increasing, it will find the largest 
}