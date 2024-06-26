class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int mismatch = 0; 
        vector<int> count(101, 0);

        for(int i = 0; i < heights.size(); i++) count[heights[i]]++;

        int i = 1, j = 0; 
        while(i < 101){
            if(count[i] == 0){
                i++;
            }
            else{
                if(i != heights[j]) mismatch++;
                j++; count[i]--;
            }
        }

        return mismatch;
    }
};