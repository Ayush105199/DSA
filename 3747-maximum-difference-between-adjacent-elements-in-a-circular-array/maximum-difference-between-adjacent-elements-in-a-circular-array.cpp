class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=1;i<n;i++)
        {
            int diff;
                 diff=abs(nums[i]-nums[i-1]);
            if(diff>maxi)
            maxi=diff;
        }
        int p=abs(nums[n-1]-nums[0]);
        if(p>maxi)
        return p;
        else
        return maxi;
        
    }
};