class Solution {
public:
int solve(vector<int>&nums,int target,int i,int sum,int n)
{
    if(i>=n)
    return sum==target?1:0;
  int pos=0;
  int neg=0;
  pos=solve(nums,target,i+1,sum+nums[i],n);
  neg=solve(nums,target,i+1,sum-nums[i],n);

  return pos+neg;

}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return solve(nums,target,0,0,n);
    }
};