class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>l(n,0),r(n,0);
        for(int i=0;i<n-1;i++)
        {
            l[i+1]=max(l[i],nums[i]);
            r[n-2-i]=max(r[n-1-i],nums[n-1-i]);
        }
        long long ans=0;
        for(int i=1;i<n-1;i++)
        {
            ans=max(ans,(l[i]-nums[i])*(long long)r[i]);
        }
        return ans;
    }
};