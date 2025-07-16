class Solution {
public:
int DP(int i,int previdx,int n,vector<int>&nums,vector<vector<int>>&memo)
{
    if(i>=n)
    return 0;
    if(memo[i][previdx+1]!=-1)
    return memo[i][previdx+1];
int take=0;
int skip=0;

    // if(nums[i+1]>nums[i])
    if(previdx==-1 || nums[i]>nums[previdx])
    take=1+DP(i+1,i,n,nums,memo);

    skip=DP(i+1,previdx,n,nums,memo);

    return memo[i][previdx+1]= max(take,skip);
}
    int lengthOfLIS(vector<int>& nums) {

        int n=nums.size();
        vector<vector<int>>memo(n,vector<int>(n+1,-1));
        // int prev=INT_MIN;
        return DP(0,-1,n,nums,memo);
        
    }
};