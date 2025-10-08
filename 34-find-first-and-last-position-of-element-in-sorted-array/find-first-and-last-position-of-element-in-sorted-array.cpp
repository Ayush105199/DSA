class Solution {
public:
int lowerbound(vector<int>& nums, int target)
{
    int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=n;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>=target)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;

}
int upperbound(vector<int>& nums, int target)
{
    int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=n;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>target)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int p=lowerbound(nums,target);
        int q=upperbound(nums,target);
        if(p==q)
        return{-1,-1};
        return{p,q-1};
        
    }
};