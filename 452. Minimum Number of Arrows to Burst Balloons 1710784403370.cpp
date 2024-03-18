class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),comp);
        int count = 0; int r = points[0][1];
        for(int i=1; i<points.size(); i++){
            if(points[i][0] <= r){
                count++;
            }
            else r = points[i][1];
        }
        return points.size()-count;
    }
};