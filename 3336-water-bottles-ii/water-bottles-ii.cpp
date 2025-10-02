class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=0;
        int p=numBottles;
        if(numExchange>numBottles)
        return numBottles;
        while(numBottles>=numExchange)
        {
            // int r=numBottles%numExchange;
            // numBottles=numBottles/numExchange;

            numBottles-=numExchange-1;
            p++;
            numExchange++;
            
        }
        return p;
    }
};