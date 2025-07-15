class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> dp(n,false);
        dp[0]=true;
        for(int i=0;i<n-1;i++)
        {
            if(!dp[i])
            continue;
            for(int j=0;j<=nums[i];j++)
            {
                if(i+j==n)
                break;
                dp[i+j]=true;
            }
            if(dp[n-1])
            break;
        }
        return dp[n-1];
    }
};