#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;

    char sign;
    cin>>sign;

    int b;
    cin>>b;

    char sign2;
    cin>>sign2;

    int result;
    cin>>result;

    // cout<<a<<" "<<sign<<" "<<b<<" "<<sign2<<" "<<sum;
    if (sign=='+' && sign2=='=')
    {
        if (a+b==result)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
       
    }
    else if (sign=='-' && sign2=='=')
    {
        if (a-b==result)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a-b<<endl;
        }
       
    }
    else if (sign=='*' && sign2=='=')
    {
        if (a*b==result)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a*b<<endl;
        }
       
    }
}