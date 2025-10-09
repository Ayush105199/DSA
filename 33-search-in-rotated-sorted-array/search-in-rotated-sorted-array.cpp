class Solution {
public:
    int search(vector<int>& arr, int target) {
         int n=arr.size();
        // int l=0;
        // int ans=n-1;
        // int r=n-1;
        // while(l<=r){
        //     int mid=l+(r-l)/2;
        //     if(arr[mid]==target)
        //     return mid;
        //     else if(arr[mid]<arr[mid+1])
        //     {
        //         l=mid+1;
        //     }
        //     else{
        //         ans=mid;
        //         r=mid-1;
        //     }

        // }
        // return ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==target)
            return i;
        }
        return -1;
    }
};