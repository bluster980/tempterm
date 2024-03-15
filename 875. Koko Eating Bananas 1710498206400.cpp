class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int l = 1, r = 1e4;
        while(l<=r){
            int mid = l + (r-l)/2;
            int cnt = 0;
            for(int i=0; i<p.size(); i++){
                cnt += ceil(p[i]/(mid*1.0));
            }
            if(cnt <= h){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};