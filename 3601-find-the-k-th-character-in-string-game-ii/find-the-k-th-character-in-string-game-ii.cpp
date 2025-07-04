// class Solution {
// public:
//     char kthCharacter(long long k, vector<int>& operations) {
//         string p ="a";
//         for(int i=0;i<operations.size();i++)
//         {
//             string q="";
//             if(operations[i]==0)
//             {
                
//                 for(char ch : p)
//                 q+=ch;
//             }
//             else if(operations[i]==1)
//             {
//                 for(char ch:p)
//                 q+=ch+1;
//             }
//             p+=q;
//         }
//         // int s=k-p.size()/2;
//         return p[k-1];
//     }
// };


class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        if(k==1)
        return 'a';
        int n=operations.size();
        long long len=1;
        long long upk=-1;
        long long opt=-1;
        for(int i=0;i<n;i++)
        {
            len*=2;
            if(len>=k)
            {
                opt=operations[i];
                upk=k-len/2;
                break;
            }
        }
        char ch=kthCharacter(upk,operations);
        if(opt==0)
        return ch;
        return ch=='z'?'a':ch+1;
    }
};