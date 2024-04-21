class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> graph(n);
        for(int i=0; i<edges.size(); i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n,0);
        queue<int> q;
        q.push(start); vis[start] = true;
        while(!q.empty()){
            int top = q.front(); q.pop();
            if(top == end){
                return true;
            }
            for(int i=0; i<graph[top].size(); i++){
                if(!vis[graph[top][i]])
                    q.push(graph[top][i]);
                    vis[graph[top][i]] = true;
            }
        }
        return false;
    }
};