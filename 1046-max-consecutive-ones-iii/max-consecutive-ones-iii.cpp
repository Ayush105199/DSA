class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, cz = 0, res = 0,j=0;
        int n=nums.size();
        while(j<n)
        {
            if(nums[j]==0)
            cz++;
            while(cz>k)
            {
                if(nums[l]==0)
                cz--;
                l++;
            }
            res=max(res,j-l+1);
            j++;
        }
        // if(res==0)
        // res=j-l-1;
        return res;
    }
};