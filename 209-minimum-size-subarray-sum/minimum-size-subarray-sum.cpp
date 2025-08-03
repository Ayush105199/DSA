
        // int index1=n+1;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum=sum+nums[j];
        //         if(sum>=target)
        //         index1=min(index1,j-i+1);

        //     }
        // }
        // if(index1==n+1)
        // return 0;
        // return index1;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int prev=nums[0],n=nums.size();
        vector<int> prefix(n,0);
        prefix[0]=prev;
        for(int i=1;i<n;i++){
            prefix[i]=prev+nums[i];
            prev=prefix[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(prefix[i]==target){
                ans=min(ans,i+1);
            } else if(prefix[i]>target){
                int temp=prefix[i];
                int length=i+1;
                for(int j=0;j<n;j++){
                    if(temp-prefix[j]>=target){
                        length--;
                    } else{
                        break;
                    }
                }
                ans=min(ans,length);
            }
        }
        if(ans==INT_MAX) return 0;
        else return ans;
    }
};
        
  