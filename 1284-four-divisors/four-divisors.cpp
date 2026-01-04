class Solution {
public:
int divisor(int n)
{
    // vector<int>temp;
    // for(int i=1;i<=sqrt(n);i++)
    // {
    //     if(n%i==0)
    //     temp.push_back(i);
    // }
    // int sum=0;
    // if(temp.size()==3)
    // {
    //     for(int i=0;i<temp.size();i++)
    //     sum+=temp[i];

    // }
    // if(temp.size()==3)
    // sum+=n;
    // return sum;

    int cnt=0;
    int sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0){

        
        int d1=i;
        int d2=n/i;
        if(d1==d2)
        {
            cnt++;
            sum+=d1;
        }
        else
        {
            cnt+=2;
            sum+=(d1+d2);
        }
        if(cnt>4)
        return 0;
        }
    }
    return(cnt==4)?sum:0;
}
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        // int ans=divisor(nums,n);
        for(int i=0;i<n;i++)
        {
            sum+=divisor(nums[i]);
        }
        return sum;
    }
};