class Solution {
public:
    int dfs(int node, int parent, vector<vector<int>>& adj, vector<int>& values, int k, int& ans) {
        int compSum = values[node];

        for (int neighbor : adj[node]) {
            if (neighbor == parent) continue; 

            compSum += dfs(neighbor, node, adj, values, k, ans);
        }

        if (compSum % k == 0) {
            ans++;
            compSum = 0;
        }

        return compSum;
    }
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        unordered_map<int, int> compSums; 
        vector<vector<int>> adj(n);

        for (vector<int>& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int ans = 0; 

        int rootCompSum = dfs(0, -1, adj, values, k, ans);

        if (rootCompSum % k == 0) {
            ans++;
        }

        return ans - 1;
    }
};