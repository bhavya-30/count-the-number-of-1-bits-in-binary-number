//write a function that takes an unsigned integer ans=d returns the number of '1'bits it has (also known as the hamming weight)
#include<iostream>
using namespace std;
int hammingWeight(uint32_t n)
{
    int num;
    int count=0;
    while(n>0)
    {
        num=n%10;
        if(num==1)
         {
            count++;
         }
        n=n/10;
        // cout<<count;
    }
    return count;
}

int main()
{
    uint32_t n;
    cout<<"enter the value of n:";
    cin>>n;
    int ans=hammingWeight(n);
    
    cout<<ans;
}