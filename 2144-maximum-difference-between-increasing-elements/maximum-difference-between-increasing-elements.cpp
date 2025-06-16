class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int maxi=-1;
        int mini=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]>mini)
            maxi=max(maxi,nums[i]-mini);

            mini=min(nums[i],mini);

        }
        // for(int i=0;i<n-1;i++)
        // {
        //     int p=-1;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[j]>nums[i])
        //         p=nums[j]-nums[i];
        //         if(p>maxi)
        //         maxi=p;

        //     }
            

        // }
        return maxi;
        
    }
};