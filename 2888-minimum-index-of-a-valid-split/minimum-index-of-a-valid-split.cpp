class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int i=0;i<n;i++)
        {
            m2[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            m1[nums[i]]++;
            m2[nums[i]]--;
            if(m2[nums[i]]<=0)
            m2.erase(nums[i]);
            int n1=i+1;
            int n2=n-i-1;
            if(m1[nums[i]]>(n1/2) && m2[nums[i]]>(n2/2))
            {
                return i;
            }

        }
        return -1;

        
    }
};