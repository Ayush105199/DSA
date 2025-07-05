class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        map<int,int>m;
        for(auto i:arr)
        m[i]++;
        int p=-1;
        for(auto [key,value]:m)
        {
            if(key==value)
            p=key;
        
        }
        return p;
    }
};