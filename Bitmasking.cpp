#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int get_bit(int n,int i)
{
int mask=1<<i;
int r=n&mask;
    if(r>0) return 1;
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    cout<<get_bit(n,i);


}
