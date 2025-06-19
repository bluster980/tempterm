for (int x = 0; x <= xMax;) { // start from 0
    // skip x when freq[x]=0
    while (x <= xMax && freq[x] == 0)
        x++;
    if (x > xMax) // no more x
        break;

    int end = x + k; // subsequence max
    partitions++; // increase partitions by 1
    x = end + 1; // next subsequence min
}