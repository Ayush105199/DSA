class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>inorder(n,0);
        for(auto &edge : edges)
        {
            int from = edge[0];
            int to=edge[1];
            inorder[to]++;

        }
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            if(inorder[i]==0)
            result.push_back(i);
        }
        return result;
        
    }
};