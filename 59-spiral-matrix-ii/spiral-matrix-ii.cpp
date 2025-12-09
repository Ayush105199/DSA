class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int m=n;
        int left =0;
        int right=n-1;
        int top=0;
        int bottom=m-1;
        int num=1;
        
        int dir=0;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    matrix[top][i]=num;;
                    num++;
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    matrix[i][right]=num;
                    num++;
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    matrix[bottom][i]=num;
                    num++;
                }
                bottom--;
            }
            else
            {
                for(int i=bottom;i>=top;i--)
                {
                    matrix[i][left]=num;
                    num++;
                }
                left++;
            }
            
            dir++;
            if(dir==4)
            dir=0;
        }
        return matrix;;
    }
};