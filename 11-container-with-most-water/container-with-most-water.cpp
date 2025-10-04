class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int max_area=INT_MIN;
        while(left<=right)
        {
            int pre_area=min(height[left],height[right])*(right-left);
            max_area=max(pre_area,max_area);
            if(height[left]<height[right])
            left++;
            else
            right--;


        }
        return max_area;
        
    }
};