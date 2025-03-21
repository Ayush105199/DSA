class Solution {
public:
   bool dfs(unordered_map<int,vector<int>>&adj , vector<bool>&visited, int s, int d)
   {
    if(s==d)
    return true;

    if(visited[s]==true)
    return false;

    visited[s]=true;
    for(auto &n : adj[s])
    {
        if(dfs(adj,visited,n,d)==true)
        return true;
    }
    return false;
   }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)
        return true;
        unordered_map<int,vector<int>>adj;
        vector<bool>visited(n,false);
        for(auto &edge : edges)
        {
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        return dfs(adj,visited,source,destination);
        
    }
};