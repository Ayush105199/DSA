class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        // return 0;
        long long temp=0;
        long long ans=0;

        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    temp=(nums[i]-nums[j])*(long long)nums[k];
                    ans=max(temp,ans);


                }
            }
        }
        if(ans<0)
        return 0;
        return ans;

        
    }
};