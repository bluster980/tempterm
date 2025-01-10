class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i=0; i<words.size(); i++){
            string y;
            if(words[i].size()>=pref.size())
            {
                for(int j=0; j<pref.size(); j++){
                    y.push_back(words[i][j]);
                }
            }
            if(y==pref) count++;
        }
        return count;
    }
};