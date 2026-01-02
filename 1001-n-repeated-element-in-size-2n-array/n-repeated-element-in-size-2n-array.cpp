class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for( auto i:nums)
        {
            m[i]++;
        }
        for(auto i:m)
        {
            if(i.second>1)
            {
                if(2*i.second==n)
                return i.first;
            }
        }
        return 0;
    }
};