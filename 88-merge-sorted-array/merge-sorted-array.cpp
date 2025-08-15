class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
        int i=0;
        int j=0;
        vector<int>result=nums1;
        nums1.clear();
        while(i<m&&j<n)
        {
            if(result[i] < nums2[j]){
            nums1.push_back(result[i]);
            i++;
            }
            else if(result[i]==nums2[j])
            {
                nums1.push_back(result[i]);
                nums1.push_back(nums2[j]);
                i++;
                j++;
            }
            else{
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
            nums1.push_back(result[i]);
            i++;
        }
         while(j<n)
        {
            nums1.push_back(nums2[j]);
            j++;
        }
        // return result;
    }
};