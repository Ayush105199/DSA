class Solution {
public:
    long long coloredCells(int n) {
    // long long N = static_cast<long long>(n);
    long long N=(long long)n; 
    return N * N + (N - 1) * (N - 1);
}


    
        
    
};