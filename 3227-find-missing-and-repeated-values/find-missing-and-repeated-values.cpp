class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        map<int,int>q;
        vector<int>p;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                q[grid[i][j]]++;

            }

        }
        int first=q[0];
        for(auto i:q)
        {
            if(i.second > 1){
            p.push_back(i.first);
            }
            if(i.first==first)
            {
                first++;
            }
            
        }
        p.push_back(first);
        return p;
        
    }
};