class Solution {
public:
int solve(vector<int>&nums,int maxi,int i,int sum,int n)
{
    if(i>=n)
    return sum == maxi ? 1 : 0;


    int take=0;
    int skip=0;
    take=solve(nums,maxi,i+1,sum|nums[i],n);
    skip=solve(nums,maxi,i+1,sum,n);

    return take+skip;
}
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int curr=maxi|nums[i];
            maxi=curr;
        }
        return solve(nums,maxi,0,0,n);
    }
};