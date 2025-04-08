class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        vector<bool>m(101,false);
        int i=n-1;
        for(i=n-1;i>=0;i--)
        {
            int p=nums[i];
            if(m[p]==false)
            m[p]=true;
            else
            break;
        }
        i=i+1;
        return ceil((double)i/3);
    }
};