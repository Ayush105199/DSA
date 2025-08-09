class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
        return false;
        int p=sqrt(n);
        for(int i=0;i<=p+1;i++)
        if(pow(2,i)==n)
        return true;

        return false;
        
    }
};