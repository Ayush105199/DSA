class Solution {
public:
typedef pair<int,pair<int,int>>PP;
vector<vector<int>>directions={{0,1},{1,0},{-1,0},{0,-1}};
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m=heightMap.size();
        int n=heightMap[0].size();
        priority_queue<PP,vector<PP>,greater<>>boundary;
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        for(int row=0;row<m;row++)
        {
            for(int col:{0,n-1})
            {
                boundary.push({heightMap[row][col],{row,col}});
                visited[row][col]=true;

            }
        }
        for(int col=0;col<n;col++)
        {
            for(int row:{0,m-1})
            {
                if(!visited[row][col]){
                boundary.push({heightMap[row][col],{row,col}});
                visited[row][col]=true;
                }

            }
        }
        int water=0;
        while(!boundary.empty())
        {
            PP p=boundary.top();
            boundary.pop();
            int height=p.first;
            int i=p.second.first;
            int j=p.second.second;
            for(vector<int>&dir:directions)
            {
                int i_=i+dir[0];
                int j_=j+dir[1];
                if(i_>=0 && i_<m &&j_>=0 &&j_<n &&!visited[i_][j_])
                {
                    water+=max(height-heightMap[i_][j_],0);
                    boundary.push({max(height,heightMap[i_][j_]),{i_,j_}});
                    visited[i_][j_]=true;
                }
            }
        }
        return water;
    }
};