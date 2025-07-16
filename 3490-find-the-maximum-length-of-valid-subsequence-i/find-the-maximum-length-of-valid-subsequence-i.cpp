class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            even++;
            else
            odd++;
        }
        int alter=1;
        int check=nums[0]%2;
        for(int i=0;i<n;i++)
        {
            int cup=nums[i]%2;
            if(cup!=check)
            alter++;
            check=cup;

        }
        return max({odd,even,alter});
    }
};