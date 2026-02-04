const long long INF = -1e17;
const uint N = 3;      
const bool start = true;
long long state[N];

class Solution {
public:
    long long maxSumTrionic(const vector<int>& nums) {
        fill(begin(state), end(state), INF);
        long long result = INF, prev = nums[0];
        for (uint i = 1; i < nums.size(); i++) {
            long long curr = nums[i];
            if (curr == prev) {
                fill(begin(state), end(state), INF);
                continue;
            }
            bool valid = ((N & 1) == start) && (curr > prev);
            for (uint j = N - 1; j != -1; j--) {
                long long prevstate = j ? state[j - 1] : prev;
                state[j] = valid ? max(prevstate, state[j]) + curr : INF;
                valid = !valid;
            }
            result = max(result, state[N - 1]);
            prev = curr;
        }
        return result;
    }
};