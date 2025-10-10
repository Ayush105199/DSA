class Solution {
public:
int pivotindex(vector<int>&nums,int l,int r)
{
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(nums[mid]>nums[r])
        {
            l=mid+1;
        }
        else
        r=mid;
    }
    return r;
}
int  binarysearch(vector<int>& nums, int target,int l,int r)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        r=mid-1;
        else
        l=mid+1;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int idx=pivotindex(nums,0,n-1);
        int p=binarysearch(nums,target,0,idx-1);
        if(p!=-1)
        return p;
        else
        {
            p=binarysearch(nums,target,idx,n-1);

        }
        return p;




        
    }
};