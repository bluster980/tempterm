class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans = 0, minNum = INT_MAX;
        int negativeNums = 0;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j]<0) {
                    negativeNums++;
                }
                ans += abs(matrix[i][j]);
                maxNum = min(abs((long long)matrix[i][j]), minNum);
            }
        }
        if(negativeNums%2==0) {
            return ans;
        }
        return ans - 2 * minNum;
    }
};