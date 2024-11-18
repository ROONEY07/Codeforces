#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    float flor = (a*1.0/b*1.0);

    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(flor)<<endl;   
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(flor)<<endl;   
    cout<<"round "<<a<<" / "<<b<<" = "<<round(flor)<<endl;   
}