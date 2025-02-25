class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int m=1e9+7;
        vector<int>ps(n);
        ps[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            ps[i]=ps[i-1]+arr[i];
        }
        int os=0;
        int es=1;
        int result=0;
        for(int i=0;i<n;i++)
        {
            if(ps[i]%2==0){
                result=(result+os)%m;
            es++;
            }
            else{
                result=(result+es)%m;
            os++;
            }

        }
        return result;
        
    }
};