class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        int value=1;
        for(int i=1;i<=numRows;i++)
        {
            vector<int>result1;
            result1.push_back(1);
            for(int j=1;j<i;j++)
            {
                value=value*(i-j);
                value=value/j;
                result1.push_back(value);
            }
            result.push_back(result1);
        }
        return result;  
    }
};