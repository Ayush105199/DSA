class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.length();
        unordered_map<char,int>m;
        
        for(int i=0;i<n-1;i++)
        {
            if(word[i]==word[i+1])
            {
                m[i]++;
            }
        }
        int sum=0;
        for(auto i : m)
        {
            sum+=i.second;
        }
       return sum+1;
        



        
        

    }
};