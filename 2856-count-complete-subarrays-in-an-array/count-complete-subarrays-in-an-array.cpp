class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> m;

        for (int i = 0; i < nums.size(); i++) {
            m.insert(nums[i]);
        }
        
        int k = m.size();
        int res = 0;
        int i=0;
        int j=0;
        int n=nums.size();
        unordered_map<int,int>p;
        while(j<n)
        {
            p[nums[j]]++;
            while(p.size()==k)
            {
                res+=n-j;
                p[nums[i]]--;
                if(p[nums[i]]==0)
                {
                    p.erase(nums[i]);

                }i++;
            }
            j++;
        }
        return res;
    }
};