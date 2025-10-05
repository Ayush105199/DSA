class Solution {
public:
vector<int>getleftmax(vector<int>&height,int&n)
{
    vector<int>lmax(n,0);
    lmax[0]=height[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],height[i]);
    }
    return lmax;
}
vector<int>getrightmax(vector<int>&height,int&n)
{
    vector<int>rmax(n,0);
    rmax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],height[i]);
    }
    return rmax;
}
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lmax=getleftmax(height,n);
        vector<int>rmax=getrightmax(height,n);
        int tw=0;
        for(int i=0;i<n;i++)
        {
            int h =min(lmax[i],rmax[i])-height[i];
            tw+=h;

        }
        return tw;

        
        
    }
};