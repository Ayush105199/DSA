class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>p;
        vector<int>q;
        vector<int>r;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            p.push_back(nums[i]);
            else if(nums[i]==pivot)
            r.push_back(nums[i]);
            else
            q.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<p.size();i++)
        {
            nums.push_back(p[i]);
        }
        for(int i=0;i<r.size();i++)
        {
            nums.push_back(r[i]);
        }
        for(int i=0;i<q.size();i++)
        {
            nums.push_back(q[i]);
        }

        return nums;

        
        
        


    }
};