class Solution {
public:
    int maxProfit(vector<int>& p) {
        int curMin = p[0], maxx_profit = 0;
        for(int i=0; i<p.size(); i++){
            maxx_profit = max(maxx_profit, p[i]-curMin);
            curMin = min(curMin, p[i]);
        }
        return maxx_profit;
    }
};