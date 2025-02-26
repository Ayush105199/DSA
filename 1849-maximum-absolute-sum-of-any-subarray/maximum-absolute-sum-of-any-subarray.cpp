class Solution {
public:
int kadanesmin(vector<int>& nums,int &n)
{
    int sum=0;
    int mani=nums[0];
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
        mani=min(mani,sum);
        if(sum>0)
        sum=0;
    }
    return mani;

}
int kadanesmax(vector<int>& nums,int &n)
{
    int sum=0;
    int maxi=nums[0];
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
        maxi=max(maxi,sum);
        if(sum<0)
        sum=0;
    }
    return maxi;

}
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int p=abs(kadanesmax(nums,n));
        int q=abs(kadanesmin(nums,n));
        return max(p,q);
        
    }
};