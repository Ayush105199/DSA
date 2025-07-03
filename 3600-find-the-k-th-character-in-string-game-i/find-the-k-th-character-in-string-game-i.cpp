class Solution {
public:
    char kthCharacter(int k) {
        string p ="a";
        while(p.size()<=k){
        string q="";
       for(char ch:p )
        {
            // q[i]=p[i]+1;
            q+=ch+1;
        }
        p+=q;
        }
        return p[k-1]; 
    }
};