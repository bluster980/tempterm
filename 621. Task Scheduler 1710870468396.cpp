class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int sum = 0; map<char,int> mp;
        for(int i=0; i<tasks.size(); i++){
            mp[tasks[i]]++;
        }
        int maxx = 0; int count = 0;
        for(auto xx:mp){
            maxx = max(maxx, xx.second);
        }
        for(auto xx:mp){
            if(maxx == xx.second) count++;
        }
        sum += (maxx*(1 + n)) - n + count-1;
        return max(sum, (int)tasks.size());
        
    }
};