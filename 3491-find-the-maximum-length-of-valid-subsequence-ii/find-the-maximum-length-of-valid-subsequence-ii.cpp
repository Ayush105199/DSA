class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        // int n = nums.size(), res = 0;
        // vector<vector<int>> dp(k,vector<int> (k,0));

        // for(auto i:nums)
        // {
        //     i %= k;
        //     for(int j = 0 ;j < k;j++)
        //     {
        //         dp[j][i] = 1 + dp[i][j];
        //         res = max(res, dp[j][i]);
        //     }
        // }
        // return res;

        int n=nums.size();
        vector<vector<int>>dp(k,vector<int>(n,1));
        int maxsum=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int mod=(nums[i]+nums[j])%k;
                dp[mod][i]=max(dp[mod][i],1+dp[mod][j]);
                maxsum=max(maxsum,dp[mod][i]);
            }
        }
return maxsum;
  
    }
};