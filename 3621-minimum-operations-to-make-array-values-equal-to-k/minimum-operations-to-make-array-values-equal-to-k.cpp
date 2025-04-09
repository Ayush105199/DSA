class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int num : nums)
        m[num]++;
        int count =0;
        bool equal=true;bool low=false;
        for(auto &it : nums)
            {
                if(it<k)
                 return -1;
            }
        for(auto &it:nums)
            {
                if(it!=k)
                 {
                    equal=false;
                    break;
                 }
            }
            if(equal)
             return count;

        for(auto num:m)
        {
            if(num.first > k)
            count++;
        }
        if(count>0)
        return count;
        return -1;
        
    }
};