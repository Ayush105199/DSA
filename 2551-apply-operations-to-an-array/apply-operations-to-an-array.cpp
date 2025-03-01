class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n,0);
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int i=0;
        int q=0;
        while(i<n)
        {
            if(nums[i]>0)
            {
                p[q]=nums[i];
                q++;
            }
            i++;


        }
        return p;

        
    }
};