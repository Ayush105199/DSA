class Solution {
public:


// 
    int longestSubarray(vector<int>& nums) {

        
        int n=nums.size();
        if(n==1)
        return 1;

        int maxi=*max_element(nums.begin(),nums.end());
        int index=0;
        // for(int i=0;i<n;i++)
        // {
        //     int cm=nums[i];
        //     for(int j=i;j<n;j++)
        //     {
        //         cm=cm&nums[j];
        //         if(cm>=maxi)
        //         {
        //             maxi=cm;
        //             // index=j-i+1;
        //         }
        //     }
        // }
        // int index=0;
        // for(int i=0;i<n;i++)
        // {
        //     int cm=nums[i];
        //     for(int j=i;j<n;j++)
        //     {
        //         cm=cm&nums[j];
        //         if(cm==maxi)
        //         index=max(index,j-i+1);
                
        //     }
        // }
       int max1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxi){
            index++;
            max1=max(max1,index);
            }
            else
            index=0;
        }
        return max1;
    }
};






  