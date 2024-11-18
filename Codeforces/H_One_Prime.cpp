#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    bool isPrime = false;
    if (n > 1 || n < 0 )
    {
        isPrime = true; 
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
           isPrime = false;
        }
        
    }

    if (isPrime)
    {
        cout<<"YES"<<endl; // prime
    }
    else
    {
        cout<<"NO"<<endl; // NOt prime
    }
    
    
       
}