class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
    
        for(int i=1;i<=numRows;i++)
        {
            long long value=1;
            vector<int>ans;
            ans.push_back(1);
            for(int j=1;j<i;j++)
            {
                value=value*(i-j);
                value=value/j;
                ans.push_back(value);
            }
            result.push_back(ans);
        }
        return result;

    }
};