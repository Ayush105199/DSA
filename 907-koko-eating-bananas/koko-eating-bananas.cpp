class Solution {
public:
int mininteger(vector<int>& piles, int h,int maxpiles)
{
    int l=1;
    int ans=maxpiles;
    int r=maxpiles;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        long long count=0;
        for(int i=0;i<piles.size();i++)
        {
            count+=(piles[i]+mid-1)/mid;
        }
        if(count<=h){
        ans=mid;
        r=mid-1;
        }
        else
        l=mid+1;

    }
    return ans;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxpiles=*max_element(piles.begin(),piles.end());
        // for(int i=0;i<n;i++)
        // {
        //     if(piles[i]>maxpiles)
        //     maxpiles=piles[i];
        // }
        int p=mininteger(piles,h,maxpiles);
        return p;
    }
};