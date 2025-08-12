class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int xortotal=0;
        int xornum=0;
        for(int i=0;i<=n;i++)
        {
            xortotal=xortotal^i;
        }
        for(int i=0;i<n;i++)
        {
            xornum=xornum^nums[i];
        }
        return xortotal^xornum;
        
    }
};