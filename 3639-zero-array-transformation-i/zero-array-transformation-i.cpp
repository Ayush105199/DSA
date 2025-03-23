class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        // if(n==0)
        // return true;
        vector<int>diff(n,0);
        for(auto &query : queries)
        {
            int start = query[0];
            int end =query[1];
            if(start >= 0 && start < n)
            diff[start]+=1;
            if((end+1) < n)
            diff[end+1]-=1;
        }
        for(int i=1;i<n;i++)
        {
            diff[i]+=diff[i-1];
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>diff[i])
            return false;
        }
        return true;
        
        
    }
};