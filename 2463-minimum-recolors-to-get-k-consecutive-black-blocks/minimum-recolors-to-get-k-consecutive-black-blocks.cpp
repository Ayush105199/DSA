class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        // int black_count = 0, ans = INT_MAX;
        
        // for (int i = 0; i < blocks.size(); i++) {
        //     if (i - k >= 0 && blocks[i - k] == 'B') black_count--;
        //     if (blocks[i] == 'B') black_count++;
        //     ans = min(ans, k - black_count);
        // }
        
        // return ans;
        int n=blocks.length();
        int i=0;
        int j=0;
        int w=0;
        int result=k;
        while(j<n)
        {
            if(blocks[j]=='W')
            w++;
            if((j-i+1)==k)
            {
                result=min(result,w);
                if(blocks[i]=='W'){
                w--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};