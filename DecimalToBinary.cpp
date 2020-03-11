#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int setbits(int n)
{
    int ans=0;
    while(n>0)
    {
    int l_b=n&1;
        ans+=l_b;

        n=n>>1;

    }
    return ans;

}
int DecimaltoBinary(int n)
{


    int ans=0;
    int p=1;
    while(n>0)
    {
        int last_bit=(n&1);
        ans+=p*last_bit;
        p=p*10;
        n=n>>1;


    }
    return ans;

}
int main()
{
    int n;
    cin>>n;
    cout<<setbits(n)<<endl;
    cout<<DecimaltoBinary(n)<<endl;

}
