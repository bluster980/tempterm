if((vowMask>>(c&31))&1){// if c is a vowel
    freq[c-'A']++;// increase the freq by 1
    pos.push_back(i);// add the index i to pos
}