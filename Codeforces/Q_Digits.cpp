#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for (int t = 1; t <= test; t++)
    {
         int n;
         cin>>n;
        do
        {
            cout<<n % 10<<" ";
            n = n / 10;
        } while (n!=0);
        cout<<endl;
    }


}