#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a = -1;
    bool found = false;
    for (int i = 1; i <=n; i++)
    {
       if (i % 2 ==0)
       {
           cout<<i<<endl;
           found = true;
       }
       
    }
    if (!found)
    {
        cout<<a<<endl;
    }
    
    
    
       
}