class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n=nums.size();
        vector<int>res=nums;
        nums.clear();
        nums.shrink_to_fit();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(res[i]!=val)
            nums.push_back(res[i]);
            else
            cnt++;
        }
        return n-cnt;
        
    }
};