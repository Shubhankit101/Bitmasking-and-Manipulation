#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Function to return the ith bit
int getbit(int n,int i)
{
    int m;
    m=1<<i;
    int no=n&m;
    if(no>0) {
        cout<<1<<endl;
    }
    else {
        cout<<0<<endl;
    }
}
// to convert or set an ith bit from 0 to 1
int setbit(int n,int i)
{

    int m;
     m=1<<i;
    int no=n|m;
    cout<<no<<endl;
}

// clearing an ith bit
int clearbit(int n,int i)
{
    int m=~(1<<i);
    int x=n&m;
    cout<<x<<endl;

}

// to update a bit
int updatebit(int n,int i,int v)
{
    int m=~(1<<i);
    n=n&m;
    int x=(v<<i);
    n=n|x;
    cout<<n<<endl;
}

// Clear last range of bit
int clearlastbits(int n,int i)
{
   int m=(-1<<i);
   n=n&m;
   cout<<n<<endl;

}
// clearing a range of bits
int clearrange(int n,int i,int j)
{
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int m=a|b;
    int ans=n&m;
    cout<<ans<<endl;

}
int main()
{


    //cin>>n;

    //cin>>i;
    cout<<"set the bit at ith position"<<endl;
    setbit(5,1);
    cout<<endl;
    cout<<"Get the bit at ith position"<<endl;
    getbit(7,1);
    cout<<endl;
    cout<<"removing bit"<<endl;
    clearbit(5,2);
    cout<<endl;
    cout<<"update bits"<<endl;
    updatebit(7,1,0);
    cout<<endl;
    cout<<"Clearing last i bits"<<endl;
    clearlastbits(31,2);
    cout<<endl;
    cout<<"Clearing range of bits "<<endl;
    clearrange(31,1,3);

}
