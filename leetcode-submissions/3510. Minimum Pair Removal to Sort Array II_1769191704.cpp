class Solution {
public:
    int n;
    vector<int>  prev, next;
    vector<long long> val;

    void init(vector<int> &v){
        n = (int)v.size();        
        prev.resize(n);
        next.resize(n);
        val.resize(n);
        for(int i = 0; i < n; i ++){
            prev[i] = i - 1;
            next[i] = i + 1;
            val[i]  = v[i];
        }
    }
    int bestPair(){
        int p = 0;
        long long minSum = LLONG_MAX;
        int bestp  = -1;
        while(next[p] != n){
            if(val[p] + val[next[p]] < minSum){
                minSum = val[p] + val[next[p]];
                bestp  = p;
            }
            p = next[p];
        }
        return bestp;
    }
    bool isSorted(){
        int p = 0;
        while(next[p] != n){
            if(val[p] > val[next[p]]){
                return false;
            }
            p = next[p];
        }
        return true;
    }
    void merge(int i){
        if(next[i] == n){
            return;
        }
        int j = next[i];
        val[i] = val[i] + val[j];
        int y = next[j];
        next[i] = y;
        if(y != n) prev[y] = i;
    }
    int minimumPairRemoval(vector<int>& nums) {
        init(nums);
        int ans = 0;
        while(!isSorted()){
            int pos = bestPair();
            merge(pos);
            ans ++;
        }
        return ans;
    }
};