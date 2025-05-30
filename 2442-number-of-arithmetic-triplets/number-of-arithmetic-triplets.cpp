class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int cnt=0;
        // for(int i=0;i<n-2;i++)
        // {
        //     for(int j=i+1;j<n-1;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff)
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
        unordered_map<int,bool>m;
        for(auto i :nums)
        {
            m[i]=true;
        }
        for(auto i :nums)
        {
            if(m[i+diff]==true && m[i-diff]==true)
            cnt++;
        }
        return cnt;
        
    }
};