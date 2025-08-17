class Solution {
public:
    long long x = 0, y = 0;
    void solve(int n, int k, int maxPts, long long currPoints)
    {
        if (currPoints >= k)
        {
            if (currPoints <= n) x++;
            y++;
            return;
        }
        for (int i = 1; i <= maxPts; i++)
        {
            solve(n, k, maxPts, currPoints + i);
        }
    }
    double new21Game(int n, int k, int maxPts) 
    {
        solve(n, k, maxPts, 0);
        return ((double)x / (double)y);
    }
};