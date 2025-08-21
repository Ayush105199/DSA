class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        // int j=1;
        // int l=0;
        // while(l<n)
        // {
        //     if( j<n && nums[l]==nums[j])
        //     {
        //         if((j-l)<=k)
        //         return true;
        //     }
        //         if((j-l)>=k){
        //         l++;
        //         j=l+1;
        //         }
        //         else
        //         j++;
        // }
        // return false;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.count(nums[i]))
            {
                if(abs(i-m[nums[i]])<=k)
                return true;
            }
            m[nums[i]]=i;


        }
        return false;
    }
};