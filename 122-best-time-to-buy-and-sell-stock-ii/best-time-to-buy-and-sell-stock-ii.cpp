class Solution {
public:
long long f(int ind,int buy,vector<int>&values,int n,vector<vector<long>>&dp)
{
    if(ind==n)
    return 0;
    if(dp[ind][buy]!=-1)
    return dp[ind][buy];
    long profit=0;
    if(buy){
        profit=max(-values[ind]+f(ind+1,0,values,n,dp), 0+f(ind+1,1,values,n,dp));
    }
    else{
        profit=max(values[ind]+f(ind+1,1,values,n,dp),0+f(ind+1,0,values,n,dp));
    }
    return dp[ind][buy]= profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<long>>dp(n,vector<long>(2,-1));
        // if(n==1)
        // return 0;
        // int profit=0;
        
        // for(int i=0;i<n-1;i++)
        // {
        //     int p=prices[i+1]-prices[i];
        //     if(p>0)
        //     profit+=p;
            
        // }
        // return profit;


        //method -2

        return f(0,1,prices,n,dp);

    }
};