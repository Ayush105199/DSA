class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int q=matrix.size();
        int n=matrix[0].size();
        map<int,vector<int>>m;
        for(int i=0;i<q;i++)
        {
            for(int j=0;j<n;j++)
            {
                m[i+j].push_back(matrix[i][j]);
            }
        }
        vector<int>result;
        bool flip =true;
        for(auto &it:m)
        {
            if(flip)
            {
                reverse(it.second.begin(),it.second.end());
            }
            for(int &num:it.second)
            {
                result.push_back(num);
            }
            flip=!flip;
        }
        return result;

       
  
    }
};