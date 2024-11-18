#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
 
    long long int sum = a*b*c*d;
    int add = sum % 100;
    cout<<add;
}