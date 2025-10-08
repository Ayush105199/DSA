class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ayush;
        if (intervals.empty()) return ayush;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int prev =0;
        // ayush[0][0]=intervals[0][0];
        // ayush[0][1]=intervals[0][1];
        ayush.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0] <= ayush[prev][1])
            {
                ayush[prev][1]=max(intervals[i][1],ayush[prev][1]);
                // ayush[prev][1]=intervals[i][1];
            }
            else{
                
                // prev=i;
                ayush.push_back(intervals[i]);
                prev++;
            }
        }
        return ayush;
    }
};