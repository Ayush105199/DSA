class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int p=mat.size();
        int q=mat[0].size();
        map<int,vector<int>>m;
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                m[i-j].push_back(mat[i][j]);

            }
        }
        for(auto&it:m)
        {
            sort(it.second.begin(),it.second.end());

        }
        for(int i=p-1;i>=0;i--)
        {
            for(int j=q-1;j>=0;j--)
            {
                mat[i][j]=m[i-j].back();
                m[i-j].pop_back();
            }
        }
        return mat;
    }
};