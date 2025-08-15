class Solution {
public:
    bool isPowerOfFour(int n) {
        int i=0;
      while(i<=15)
      {
        int p=pow(4,i);
        if(p==n)
        return true;
        if(p>n)
        break;
        i++;
      }
      return false;
        
    }
};