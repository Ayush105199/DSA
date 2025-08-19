class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long sum=0;
        long long maxi=0;
        unordered_map<int,int>m;
        int l=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            m[nums[i]]++;

            if(i-l+1>k){
                m[nums[l]]--;
                sum-=nums[l];
                if(m[nums[l]]==0)
                m.erase(nums[l]);
                l++;
            }
            if(i-l+1==k && m.size()==k)
            maxi=max(maxi,sum);
        }
        return maxi;
        

    }
};