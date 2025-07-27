class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        // set<int>m;
        // for(int i=0;i<n;i++)
        // {
        //     m.insert(nums[i]);
        // }
        // nums.clear();
        // for(auto i:m)
        // {
        //     nums.push_back(i);
        // }
        vector<int>m;
        for(int i=0;i<n;i++)
        {   
            if( i+1 <n && nums[i]==nums[i+1] )
            {
                continue;
            }
        
            else
            m.push_back(nums[i]);

        }
        for(int i=0;i<m.size();i++)
        cout<<m[i]<<" ";

        

        for(int i=1;i<m.size()-1;i++)
        {
            if(((m[i]>m[i-1])&&(m[i]>m[i+1])) ||((m[i]<m[i-1]) && (m[i]<m[i+1])))
            cnt++;

        }
        return cnt;
        
        
    }
};