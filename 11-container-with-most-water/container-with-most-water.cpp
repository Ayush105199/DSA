class Solution {
public:
    int maxArea(vector<int>& height) {
        // int n=height.size();
        // int max_area=INT_MIN;
        // for(int i=0;i<n-1;i++)
        // {
        //     int area;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int mini;
        //         if(height[i]<height[j])
        //         mini=height[i];
        //         else
        //         mini=height[j];

        //         area=mini*(j-i);

        //         max_area=max(max_area,area);




        //     }
        // }
        // return max_area;
        int right=height.size()-1;
        int left=0;
        int max_area=INT_MIN;
        while(left<right)
        {
            int currarea=min(height[left],height[right])*(right-left);
            max_area=max(max_area,currarea);
            if(height[left]<height[right])
            left++;
            else
            right--;

        }
        return max_area;

        
    }
};