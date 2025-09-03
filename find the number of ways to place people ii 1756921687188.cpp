class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int cnt = 0;
        sort(points.begin(), points.end());
        map<int, int> mpx;
        map<int, int> mpy;
        for(int i=0; i<n; i++){
            mpx[points[i][0]]++;
            mpy[points[i][1]]++;
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                auto p1 = points[i];
                auto p2 = points[j];

                if(p1[0] < p2[0] && p1[1] < p2[1]) continue;
                if(p1[0] == p2[0] || p1[1] == p2[1]) continue;

                bool check = true;
                for(int k=0; k<n; k++){
                    auto p = points[k];
                    if(k == i || k == j) continue;
                    int px = p[0], py = p[1];
                    if(px>=p1[0] && px <= p2[0] && py>=p2[1] && py<=p1[1]){
                        check = false;
                        break;
                    }
                }
                if(check) cnt++;
            }
        }
        for(auto it: mpx){
            cnt += it.second-1;
        }
        for(auto it: mpy){
            cnt += it.second-1;
        }
        return cnt;
    }
};