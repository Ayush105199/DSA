class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int ni=0;
        int pi=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            pi++;
            else if(nums[i]<0)
            ni++;
            else
            continue;
        }
        return max(pi,ni);
        
    }
};