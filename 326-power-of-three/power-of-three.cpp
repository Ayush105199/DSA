class Solution {
public:
int m=1e9+7;
    bool isPowerOfThree(int n) {
        int i = 0;
    while (i<=19) {
        int p = pow(3, i);
        if (p == n)
            return true;
        if (p > n)
            break;
        i++;
    }
    return false;
    }
};