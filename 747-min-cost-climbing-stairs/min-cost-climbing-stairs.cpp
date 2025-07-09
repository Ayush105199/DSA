class Solution {
public:
// int n=cost.size();
// int dp[3]={-1};
// vector<int>dp(n,-1);
int solve(int i,vector<int>&cost,int n,vector<int>&dp)
{
    if(i>=n)
    return 0;

    if(dp[i]!=-1)
    return dp[i];

    int onestep=cost[i] +solve(i+1,cost,n,dp);
    int twostep=cost[i]+solve(i+2,cost,n,dp);

    return dp[i]=min(onestep,twostep);
    // return min(onestep,twostep);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        int zeroindex=solve(0,cost,n,dp);
        int oneindex=solve(1,cost,n,dp);
        return min(zeroindex,oneindex);
    }
};