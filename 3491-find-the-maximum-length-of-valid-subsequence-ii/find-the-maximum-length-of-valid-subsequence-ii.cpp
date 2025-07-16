class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {



    
        int n = nums.size(), res = 0;
        vector<vector<int>> dp(k,vector<int> (k,0));

        for(auto i:nums)
        {
            i %= k;
            for(int j = 0 ;j < k;j++)
            {
                dp[j][i] = 1 + dp[i][j];
                res = max(res, dp[j][i]);
            }
        }
        return res;
  
        
    }
};