class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cnt1=0;
        for(int i=0;i<costs.size();i++)
        {
            if(coins>=costs[i])
            {
                cnt1++;
                coins=coins-costs[i];
            }
        }
return cnt1;
        
    }
};