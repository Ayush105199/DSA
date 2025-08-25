class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, cz = 0, res = 0,j=0;
        int n=nums.size();
        while(j<n)
        {
            if(nums[j]==0)
            cz++;
            while(cz>1)
            {
                if(nums[l]==0)
                cz--;
                l++;
            }
            res=max(res,j-l);
            j++;
        }
        // if(res==0)
        // res=j-l-1;
        return res;
        
        
    }
};