class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size();
        int totalcost=0;
        int totalgas=0;
        int start=0;
        int CurrGas=0;
        for(int i=0;i<n;i++)
        {
            totalcost+=cost[i];
            totalgas+=gas[i];
            CurrGas+= gas[i]-cost[i];
            if(CurrGas<0){
            start=i+1;
            CurrGas=0;
            }

        }
        return totalgas<totalcost ? -1 : start;
    }
};