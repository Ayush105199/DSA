class Solution {
public:
    string largestOddNumber(string num) {
        int p;
        string s;
        int n=num.length();
        int q=n;
        // if((num[n-1]-'0')%2==1)
        // return num;

        // for(int i=0;i<n;i++)
        // {
        //     p=p*10+(num[i]-'0'); 
        // }
        // if(p%2==1){
        // s=to_string(p);
        // return s;
        // }
        // n=n-1;
        
            while(n>=0)
            {
                if((num[n]-'0')%2==1)
                {
                    return num.substr(0,n+1);

                }
                n--;
            }
         return "";
    }
};