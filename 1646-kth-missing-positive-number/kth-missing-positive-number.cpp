class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int index=0;
        int current=1;
        int missingcount=0;
        while(true)
        {
            if(index < arr.size() && current == arr[index])
            index++;
            else
            {
                missingcount++;
                if(missingcount==k)
                return current;
            }
            current++;
        }
        // return current;
    }
};