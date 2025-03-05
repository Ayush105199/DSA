class Solution {
public:
    long long coloredCells(int n) {
    long long N = static_cast<long long>(n);  // Explicitly casting to long long
    return N * N + (N - 1) * (N - 1);
}


    
        
    
};