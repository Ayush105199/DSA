class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>result;
    
        for(int i=1;i<=rowIndex+1;i++)
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
        vector<int>p= result.back();
        return p;
    }
};