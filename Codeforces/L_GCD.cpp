#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    // gcd
    int rem;
    while (b!=0)
    {
       rem =  a % b;
       a = b;
       b = rem; 
    }
    cout<<a;
       
}