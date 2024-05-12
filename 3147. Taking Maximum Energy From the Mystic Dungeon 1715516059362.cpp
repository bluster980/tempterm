class Solution {
public:
    int maximumEnergy(vector<int>& e, int k) {
        for(int i = 0; i<e.size()-k; i++){
            e[i] += e[i+k];
        }
        return *max_element(e.begin(), e.end());
    }
};