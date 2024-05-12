class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int> mp1,mp2;
        for(int i=0; i<s.size(); i++){
            mp1[s[i]] = i;
        }
        for(int i=0; i<t.size(); i++){
            mp2[t[i]] = i;
        }
        int sum = 0;
        for(auto xx:mp1){
            sum += abs(xx.second-mp2[xx.first]);
        }
        return sum;
    }
};