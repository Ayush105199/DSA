class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        int p=numBottles;
        if(numExchange>numBottles)
        return numBottles;
        while(numBottles>=numExchange)
        {
            int r=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            ans+=numBottles;
            numBottles+=r;
        }
        return p+ans;
    }
};