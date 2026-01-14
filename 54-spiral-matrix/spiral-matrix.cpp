class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int p=0;
        int q=0;
        int r=n-1;
        int s=m-1;
        int dir=0;
        vector<int>ans;
        while(p<=r && q<=s)
        {
            if(dir==0)
            {
                for(int i=q;i<=s;i++)
                ans.push_back(matrix[p][i]);
                p++;
            }
            else if(dir==1)
            {
                for(int j=p;j<=r;j++)
                ans.push_back(matrix[j][s]);
                s--;
            }
            else if(dir==2)
            {
                for(int i=s;i>=q;i--)
                {
                    ans.push_back(matrix[r][i]);
                }
                r--;
            }
            else{
                for(int j=r;j>=p;j--)
                {
                    ans.push_back(matrix[j][q]);
                }
                q++;
            }
            dir++;
            if(dir==4)
            dir=0;
        }
        return ans;
    }
};