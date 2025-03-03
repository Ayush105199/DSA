class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;

    long long power = abs((long long)n); 
    double result = 1.0;

    while (power > 0) {
        if (power % 2 == 1) {  
            result *= x;
        }
        x *= x; 
        power /= 2;
    }

    return (n < 0) ? (1 / result) : result;
    }
};