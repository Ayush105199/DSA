class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>m;
        for(int i: answers)
        m[i]++;

        int total=0;
        for(auto &i : m)
        {
            total+=ceil((double)i.second/(i.first+1))* (i.first+1);
        }
        return total;
    }
};