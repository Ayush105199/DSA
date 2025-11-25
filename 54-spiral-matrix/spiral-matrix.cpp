class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left =0;
        int right=n-1;
        int top=0;
        int bottom=m-1;
        vector<int>result;
        int dir=0;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            else
            {
                for(int i=bottom;i>=top;i--)
                {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;
            if(dir==4)
            dir=0;
        }
        return result;
        
        
    }
};