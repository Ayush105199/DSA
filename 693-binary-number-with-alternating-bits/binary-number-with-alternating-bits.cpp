class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32>b(n);
        int highestbit=log2(n);
        for(int i=0;i<highestbit;i++)
        {
            if(b[i]==b[i+1])
            return false;
        }
        return true;
        

        
    }
};